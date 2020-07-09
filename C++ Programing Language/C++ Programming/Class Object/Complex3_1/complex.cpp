#include "complex.h"

int Complex::numberOfComplex;

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";

	return out;
}


int Complex::getNumberOfComplex()
{
	return Complex::numberOfComplex;
}

Complex::Complex(double re, double im)
	: re_(re), im_(im)								// constructor initialization list
{
	++Complex::numberOfComplex;
}

Complex::Complex(const Complex& rhs)
	: re_(rhs.re_), im_(rhs.im_)
{
	++Complex::numberOfComplex;
}

Complex::~Complex()
{
	--Complex::numberOfComplex;
}

bool Complex::operator==(const Complex& rhs) const
{
	return re_ == rhs.re_ && im_ == rhs.im_;
}

const Complex Complex::operator+(const Complex& rhs) const
{
	Complex result(re_ + rhs.re_, im_ + rhs.im_);

	return result;
}

const Complex Complex::operator-(const Complex& rhs) const
{
	return Complex(re_ - rhs.re_, im_ - rhs.im_);
}

double Complex::real() const
{
	return re_;
}

double Complex::imag() const
{
	return im_;
}

void Complex::real(double re)
{
	re_ = re;
}

void Complex::imag(double im)
{
	im_ = im;
}
