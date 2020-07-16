#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"

template <typename T>
class BoundArray : public SafeArray {
private:
	int lower_;
	// int upper_; //	-> size = base class 


public:
	BoundArray(int lower, int upper);
	BoundArray(int lower, int upper, const int* pArr);
	// BoundArray(const BoundArray& rhs); 
	// ~BoundArray();
	// BoundArray& operator = (const BoundArray& rhs);
	bool operator==(const BoundArray& rhs) const;

	int& operator[] (int index);
	const int& operator[] (int index) const;

	int lower() const;
	int upper() const;
};

#include "boundArray.h"

template <typename T>
BoundArray::BoundArray(int lower, int upper)
	: SafeArray(upper - lower + 1), lower_(lower)
{

}

template <typename T>
BoundArray::BoundArray(int lower, int upper, const int* pArr)
	: SafeArray(pArr + lower, upper - lower + 1), lower_(lower)
{

}

template <typename T>
bool BoundArray::operator==(const BoundArray& rhs) const
{
	if (lower_ != rhs.lower_)
		return false;

	return this->SafeArray::operator==((SafeArray)rhs);		// slicing
}

template <typename T>
int& BoundArray::operator[] (int index)
{
	return this->SafeArray::operator[](index - lower_);
}

template <typename T>
const int& BoundArray::operator[] (int index) const
{
	return this->SafeArray::operator[](index - lower_);
}

template <typename T>
int BoundArray::lower() const
{
	return lower_;
}

template <typename T>
int BoundArray::upper() const
{
	return lower_ + this->Array::size_ - 1;
}

#endif