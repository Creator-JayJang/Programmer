#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

template <typename T>
class SafeArray : public Array<T> {
private:
	static const int SAFE_ARRAY_SIZE;

public:
	explicit SafeArray(int size = SafeArray<T>::SAFE_ARRAY_SIZE);
	SafeArray(const T* pArr, int size);
	SafeArray(const SafeArray<T>& rhs);
	~SafeArray();
	SafeArray& operator=(const SafeArray<T>& rhs);

	bool operator==(const SafeArray<T>& rhs) const;

	T& operator[](int index);
	const T& operator[](int index) const;

};

#include <cassert>

template <typename T>
const int SafeArray<T>::SAFE_ARRAY_SIZE = 100;

template <typename T>
SafeArray<T>::SafeArray(int size)
	: Array<T>(size)
{

}

template <typename T>
SafeArray<T>::SafeArray(const T* pArr, int size)
	: Array<T>(pArr, size)
{

}

template <typename T>
SafeArray<T>::SafeArray(const SafeArray<T>& rhs)
	: Array<T>((Array<T>)rhs)										// slicing
{

}

template <typename T>
SafeArray<T>::~SafeArray()
{

}

template <typename T>
SafeArray<T>& SafeArray<T>::operator=(const SafeArray<T>& rhs)
{
	this->Array<T>::operator=((Array<T>)rhs);						// type casting
	return *this;
}

template <typename T>
bool SafeArray<T>::operator==(const SafeArray<T>& rhs) const
{
	return this->Array<T>::operator==((Array<T>)rhs);
}

template <typename T>
T& SafeArray<T>::operator[](int index)	// typical class inheritance
{
	assert(index >= 0 && index < this->Array<T>::size_);

	return this->Array<T>::operator[](index);
}

template <typename T>
const T& SafeArray<T>::operator[](int index) const
{
	assert(index >= 0 && index < this->Array<T>::size_);

	return this->Array<T>::operator[](index);
}

#endif