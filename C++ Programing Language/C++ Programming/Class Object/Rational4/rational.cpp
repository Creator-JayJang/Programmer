#include <cstring>
#include <cassert>
#include "rational.h" 
#include <iostream>
#include <cmath>
#include <limits>

// Rational Helper Function
long Rational::gcd(long u, long v) {
	long a = labs(u), b = labs(v);
	long tmp;

	if (b > a) {
		tmp = a; a = b; b = tmp;
	}
	for (;;) {
		if (b == 0L)
			return a;
		else if (b == 1L)
			return b;
		else {
			tmp = b; b = a % b; a = tmp;
		}
	}
}

// Constructor
#include <stdlib.h>

Rational::Rational(long n, long d) {
	if (d == 0L) {
		cerr << "Division by zero" << endl;
		exit(1);
	}

	if (d < 0L) { n = -n; d = -d; }
	if (n == 0L) {
		num = 0L; den = 1L;
	}
	else {
		long g = gcd(n, d);
		num = n / g; den = d / g;
	}
}

// Addition
// Avoid overflow
const Rational& Rational::operator+=(const Rational& rhs) {
	long g1 = gcd(den, rhs.den);
	if (g1 == 1L) {
		num = num * rhs.den + den * rhs.num;
		den = den * rhs.den;
	}
	else {
		long t = num * (rhs.den / g1) + (den / g1) * rhs.num;
		long g2 = gcd(t, g1);
		num = t / g2;
		den = (den / g1) * (rhs.den / g2);
	}
	return *this;
}


// Binary operators for mixed mode arithmetic
const Rational& Rational::operator+=(long rhs) {
	num = num + den * rhs;
	return *this;
}

// Binary addition operator
const Rational operator+(const Rational& l, const Rational& r) {
	return Rational(l) += r;
}

// Substraction
const Rational& Rational::operator-=(const Rational& rhs) {
	long g1 = gcd(den, rhs.den);
	if (g1 == 1L) {
		num = num * rhs.den - den * rhs.num;
		den = den * rhs.den;
	}
	else {
		long t = num * (rhs.den / g1) - (den / g1) * rhs.num;
		long g2 = gcd(t, g1);
		num = t / g2;
		den = (den / g1) * (rhs.den / g2);
	}
	return *this;
}

const Rational& Rational::operator-=(long rhs) {
	num = num - den * rhs;
	return *this;
}

const Rational operator-(const Rational& l, const Rational& r) {
	return Rational(l) -= r;
}

// Multiplication
const Rational& Rational::operator*=(const Rational& rhs) {
	long g1 = gcd(num, rhs.den);
	long g2 = gcd(den, rhs.num);
	num = (num / g1) * (rhs.num / g2);
	den = (den / g2) * (rhs.den / g1);
	return *this;
}

const Rational& Rational::operator*=(long rhs) {
	long g = gcd(den, rhs);
	num *= rhs / g;
	den /= g;
	return *this;
}

const Rational operator* (const Rational& l, const Rational& r) {
	return Rational(l) *= r;
}

// Division
const Rational& Rational::operator/=(const Rational& rhs) {
	if (rhs == 0) {
		cerr << "Division by Zero" << endl;
		exit(1);
	}
	long g1 = gcd(num, rhs.num);
	long g2 = gcd(den, rhs.den);
	num = (num / g1) * (rhs.den / g2);
	den = (den / g2) * (rhs.num / g1);
	if (den < 0L) { num = -num; den = -den; }
	return *this;
}

const Rational& Rational::operator/=(long rhs) {
	if (rhs == 0L) {
		cerr << "Division by Zero" << endl;
		exit(1);
	}
	long g = gcd(num, rhs);
	num /= g;
	den *= rhs / g;
	if (den < 0L) { num = -num; den = -den; }
	return *this;
}

const Rational operator/(const Rational& l, const Rational& r) {
	return Rational(l) /= r;
}

// IncrementDecrement
// Prefix operators
const Rational& Rational::operator++() {
	return (*this += 1);
}

const Rational& Rational::operator--() {
	return (*this -= 1);
}

// Postfix operators
const Rational Rational::operator++ (int) {
	Rational oldVal = *this;
	++(*this);
	return oldVal;
}

const Rational Rational::operator-- (int) {
	Rational oldVal = *this;
	--(*this);
	return oldVal;
}

// Boolean Operators
bool operator==(const Rational& lhs, const Rational& rhs) {
	return (lhs.numerator() == rhs.numerator() && lhs.denominator() == rhs.denominator());
}
bool operator!=(const Rational& lhs, const Rational& rhs) {
	return (lhs.numerator() != rhs.numerator() || lhs.denominator() != rhs.denominator());
}

bool operator<(const Rational& lhs, const Rational& rhs) {
	return (toDouble(lhs) < toDouble(rhs));
}

bool operator>(const Rational& lhs, const Rational& rhs) {
	return (toDouble(lhs) < toDouble(rhs));
}

bool operator<=(const Rational& lhs, const Rational& rhs) {
	return ((lhs < rhs) || (lhs == rhs));
}

bool operator>=(const Rational& lhs, const Rational& rhs) {
	return ((lhs > rhs) || (lhs == rhs));
}

// Global Functions
Rational rabs(const Rational& r) {
	if (r.numerator() < 0) return -r; else return r;
}

ostream& operator<< (ostream& s, const Rational& r) {
	if (r.denominator() == 1L)
		s << r.numerator();
	else {
		s << r.numerator();
		s << "/";
		s << r.denominator();
	}
	return s;
}

// toRational
static Rational toRational(double x, double limit, int iterations) {
	double intpart;
	double fractpart = modf(x, &intpart);
	double d = 1.0 / fractpart;
	long left = long(intpart);

	if (d > limit || iterations == 0) {
		//approximation good enough, stop recursion
		return Rational(left);
	}
	else {
		// remember left part and add inverted approximation
		// of fractional part
		return Rational(left) + toRational(d, limit * 0.1, --iterations).invert();
	}
}

Rational toRational(double x, int iterations) {
	if (x == 0.0 || x < numeric_limits<long>::min() || x > numeric_limits<long>::max()) { // x==0 or x too small or too large to represent in a long
		return Rational(0, 1);
	}
	else {
		// step recursive call
		// take care of negative numbers!
		int sign = x < 0.0 ? -1 : 1;
		return sign * toRational(sign * x, 1.0e12, iterations);
	}
}
