#ifndef RATIONAL_H 
#define RATIONAL_H 
#include <iostream>


class Rational {
    friend std::ostream& operator << (std::ostream& out, const Rational& rhs);

private:
    static int numberOfRational;

    int num_;
    int den_;

public:
    static int getNumberOfRational();		// ecept exturn  --> class 

    Rational(int num = 0, int den = 1);
    Rational(const Rational& rhs);
    ~Rational();

    void Reduce(); 				// reduce a fraction

    bool operator==(const Rational& rhs) const;

    const Rational operator+(const Rational& rhs) const;
    const Rational operator-(const Rational& rhs) const;
    const Rational operator*(const Rational& rhs) const;
    const Rational operator/(const Rational& rhs) const;

    //get func
    int getNum() const;
    int getDen() const;

};

#endif 
