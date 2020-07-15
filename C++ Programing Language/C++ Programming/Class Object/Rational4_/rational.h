#ifndef RATIONAL_H
#define RATIONAL_H
#include<iostream>
using namespace std;

class Rational {
private:
	long num;
	long den;
	long gcd(long, long);

public:
	// Constructors
	Rational() : num(0), den(1) {}
	Rational(long n, long d = 1);
	// Rational(const Rational& rhs) : nums(rhs.num), den(rhs.den) {}
	// ~Rational(void) {}
	// Rational& operator=(const Rational& rhs);
	Rational& operator=(long rhs);

	// Access functions
	long numerator(void) const { return num; }
	long denominator(void) const { return den; }

	// Unary operators
	Rational operator+(void) const { return *this; }
	Rational operator-(void) const { return Rational(-num, den); }
	Rational invert(void) const { return Rational(den, num); }

	// Binary operators
	const Rational& operator+=(const Rational& rhs);
	const Rational& operator-=(const Rational& rhs);
	const Rational& operator*=(const Rational& rhs);
	const Rational& operator/=(const Rational& rhs);

	// Binary operators for mixed mode arithmetic
	const Rational& operator+=(long rhs);
	const Rational& operator-=(long rhs);
	const Rational& operator*=(long rhs);
	const Rational& operator/=(long rhs);

	// Increment/ decrement iterators
	const Rational& operator++();
	const Rational operator++(int);
	const Rational& operator--();
	const Rational operator--(int);
};

// Binary operators
const Rational operator+(const Rational& l, const Rational& r);
const Rational operator-(const Rational& l, const Rational& r);
const Rational operator*(const Rational& l, const Rational& r);
const Rational operator/(const Rational& l, const Rational& r);

// Boolean operators
bool operator==(const Rational& lhs, const Rational& rhs);
bool operator!=(const Rational& lhs, const Rational& rhs);
bool operator<=(const Rational& lhs, const Rational& rhs);
bool operator>=(const Rational& lhs, const Rational& rhs);
bool operator<(const Rational& lhs, const Rational& rhs);
bool operator>(const Rational& lhs, const Rational& rhs);

// Output operator
ostream& operator<< (ostream& s, const Rational& r);
// Other Global Functions
Rational rabs(const Rational& rhs);

// Assignment operators
inline Rational& Rational::operator=(long rhs) {
	num = rhs; den = 1;
	return *this;
}

// Explicit Conversion function Rational->double
inline double toDouble(const Rational& r) {
	return double(r.numerator()) / r.denominator();
}

// Explicit Conversion function Rational->long
inline long trunc(const Rational& r) {
	return r.numerator() / r.denominator();
}

inline long floor(const Rational& r) {
	long q = r.numerator() / r.denominator();
	return (r.numerator() < 0 && r.denominator() != 1) ? --q : q;
}

inline long ceil(const Rational& r) {
	long q = r.numerator() / r.denominator();
	return (r.numerator() >= 0 && r.denominator() != 1) ? ++q : q;
}

// Explicit Conversion function double->Rational
Rational toRational(double x, int iterations = 5);
#endif

