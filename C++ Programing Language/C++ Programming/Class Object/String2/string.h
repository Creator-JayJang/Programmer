#ifndef STRING_H
#define STRING_H
#include <iostream>

#include "stringRep.h"

class String {
	friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
	//char *str;
	//int len;
	StringRep* ptr_;

	String(const char* str, bool);
public:
	// String();
	String(const char* str = NULL);
	String(const String& rhs);
	~String();

	String& operator=(const String& rhs); 	// Reference of t type 
	String& operator=(const char* str);

	bool operator==(const String& rhs) const;
	//	bool operator != (const String& rhs);		// if you need

	const String operator+(const String& rhs) const;

	const char* c_str() const;
	int length() const;


};

#endif