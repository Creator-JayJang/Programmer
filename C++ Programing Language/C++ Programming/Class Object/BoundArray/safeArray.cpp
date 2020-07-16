#include <cassert>
#include "safeArray.h"

const int SafeArray::SAFE_ARRAY_SIZE = 100;

SafeArray::SafeArray(int size)
	: Array(size)
{

}

SafeArray::SafeArray(const int* pArr, int size)
	: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs)
	: Array((Array)rhs)										// slicing
{

}

SafeArray::~SafeArray()
{

}


SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	this->Array::operator=((Array)rhs);						// type casting
	return *this;
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return this->Array::operator==((Array)rhs);
}

int& SafeArray::operator[](int index)	// typical class inheritance
{
	assert(index >= 0 && index < this->Array::size_);

	return this->Array::operator[](index);#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

class SafeArray : public Array {
private:
	static const int SAFE_ARRAY_SIZE;
	
public:
	explicit SafeArray(int size = SafeArray::SAFE_ARRAY_SIZE);
	SafeArray(const int *pArr, int size);
	SafeArray(const SafeArray& rhs);
	virtual ~SafeArray();
	SafeArray& operator=(const SafeArray& rhs);
	
	bool operator==(const SafeArray& rhs) const;
	
	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;

};

#endif
}

const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index < this->Array::size_);

	return this->Array::operator[](index);
}