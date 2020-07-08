#include "rational.h" 

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	out << "(" << rhs.num_ << ", " << rhs.den_ << "i)";

	return out;
}

static int gcd(int a, int b)
{
	if (a == 0 || b == 0)
		return 1;
	if (b > a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int k = -1;


	while (k != 0) {
		k = a % b;
		a = b;
		b = k;
	}
	return a;
}


void Rational::Reduce()
{
	int tmp = gcd(num_, den_);
	num_ /= tmp;
	den_ /= tmp;
}

Rational::Rational(int num, int den)
	: num_(num), den_(den)								// constructor initialization list
{

}

bool Rational::operator==(const Rational& rhs) const
{
	return num_ == rhs.num_ && den_ == rhs.den_;
}

const Rational Rational::operator+(const Rational& rhs) const
{
	Rational result(num_ + rhs.num_, den_ + rhs.den_);

	return result;
}

const Rational Rational::operator-(const Rational& rhs) const
{
	return Rational(num_ - rhs.num_, den_ - rhs.den_);
}

const Rational Rational::operator*(const Rational& rhs) const
{
	return Rational(num_ - rhs.num_, den_ - rhs.den_);
}

const Rational Rational::operator/(const Rational& rhs) const
{
	return Rational(num_ - rhs.num_, den_ - rhs.den_);
}

int Rational::getNum() const
{
	return num_;
}

int Rational::getDen() const
{
	return den_;
}

