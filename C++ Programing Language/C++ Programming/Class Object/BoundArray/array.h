#ifndef ARRAY_H
#define ARRAY_H

class Array {
protected:
	int* pArr_;
	int size_;

private:
	static const int ARRAYSIZE;

	void set_arr(const int* pArr, int size);

public:
	// Array();  default constructor
	// Array(const Array& rhs);
	// ~Array();
	// Array& operator=(const Array& rhs);
	// Array* operator&();
	// const Array* operator&() const;

	explicit Array(int size = Array::ARRAYSIZE);
	Array(const int* pArr, int size);
	Array(const Array& rhs);
	~Array();

	Array& operator=(const Array& rhs);

	bool operator==(const Array& rhs) const;

	int& operator[](int index);
	const int& operator[](int index) const;

	int size() const;

};

#endif