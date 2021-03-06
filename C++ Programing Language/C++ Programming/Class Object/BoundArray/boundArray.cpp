#include "boundArray.h"

BoundArray::BoundArray(int lower, int upper)
	: SafeArray(upper - lower + 1), lower_(lower)
{

}

BoundArray::BoundArray(int lower, int upper, const int* pArr)
	: SafeArray(pArr + lower, upper - lower + 1), lower_(lower)
{

}

bool BoundArray::operator==(const BoundArray& rhs) const
{
	if (lower_ != rhs.lower_)
		return false;

	return this->SafeArray::operator==((SafeArray)rhs);		// slicing
}

int& BoundArray::operator[] (int index)
{
	return this->SafeArray::operator[](index - lower_);
}

const int& BoundArray::operator[] (int index) const
{
	return this->SafeArray::operator[](index - lower_);
}

int BoundArray::lower() const
{
	return lower_;
}

int BoundArray::upper() const
{
	return lower_ + this->Array::size_ - 1;
}