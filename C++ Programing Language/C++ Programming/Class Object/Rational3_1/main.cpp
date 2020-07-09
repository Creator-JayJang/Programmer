#include <iostream> 
#include "rational.h" 

int main()
{
	Rational r1(9, 4);
	Rational r2(6, 6);
	Rational r3(2, 2);
	Rational r4 = r3;

	Rational r5; 			//	+ 
	Rational r6; 			//	- 
	Rational r7; 			//	* 
	Rational r8;			//	/ 

	r1 = r3;
	r5 = r2 + r4;
	r6 = r2 - r4;
	r7 = r2 * r4;
	r8 = r2 / r4;

	if (r2 == r3) //now cosider gcd 
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;

	std::cout << "r1 : " << r1 << std::endl;
	std::cout << "r2 : " << r2 << std::endl;
	std::cout << "r3 : " << r3 << std::endl;
	std::cout << "r4 : " << r4 << std::endl;
	std::cout << "r5 : " << r5 << std::endl;
	std::cout << "r6 : " << r5 << std::endl;
	std::cout << "r7 : " << r5 << std::endl;
	std::cout << "r8 : " << r5 << std::endl;

	Rational* pc = new Rational;
	Rational* pArr[5];
	pArr[0] = new Rational;
	pArr[1] = new Rational(1.0);
	pArr[2] = new Rational(3.0, 4.0);
	pArr[3] = new Rational;
	pArr[4] = new Rational;
	std::cout << " # Rational object : " << Rational::getNumberOfRational() << std::endl;		// static member variable / private access
	delete pc;
	for (int i = 0; i < 5; i++)
	{
		delete pArr[i];
	}
	std::cout << " # Rational object : " << Rational::getNumberOfRational() << std::endl;


	return 0;
}
