#include <cassert>
#include "array.h"

const int Array::ARRAYSIZE = 100;

void Array::set_arr(const int* pArr, int size)
{
	this->pArr_ = new int[size];
	assert(this->pArr_);
	this->size_ = size;

	for (int i = 0; i < size_; ++i)
		this->pArr_[i] = pArr[i];
}

Array::Array(int size)
	: pArr_(new int[size]), size_(size)
{
	assert(this->pArr_);
}

Array::Array(const int* pArr, int size)
{
	this->set_arr(pArr, size);
}

Array::Array(const Array& rhs)
{
	this->set_arr(rhs.pArr_, rhs.size_);
}

Array::~Array()
{
	delete[]  this->pArr_;
}

Array& Array::operator=(const Array& rhs)
{
	if (this != &rhs) {
		delete[] this->pArr_;
		this->set_arr(rhs.pArr_, rhs.size_);
	}
	return *this;
}

bool Array::operator==(const Array& rhs) const
{
	if (this->size_ != rhs.size_)
		return false;

	int i;
	for (i = 0; i < rhs.size_; ++i)
		if (this->pArr_[i] != rhs.pArr_[i])
			break;

	return (i == rhs.size_);
}

int& Array::operator[](int index)
{
	return this->pArr_[index];
}

const int& Array::operator[](int index) const
{
	return this->pArr_[index];
}

int Array::size() const
{
	return this->size_;
}