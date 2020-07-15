#include <iostream> 
#include "rational.h" 
#include <cmath>

// Harmonic Numbers
Rational harmonic(int n) {
	Rational r = 1;
	for (int i = 2; i <= n; ++i) r += Rational(1, i);
	return r;
}

// Bernoulli Numbers
Rational binomial(int n, int k) {
	if (n < 0) { cerr << "1st out of range" << endl; exit(1); }
	if (k < 0 || k > n) { cerr << "2nd out of range" << endl; exit(1); }
	if (k > n - k) k = n - k;
	if (k == 0) return 1;
	return Rational(n - k + 1, k) * binomial(n, k - 1);
}

Rational bernoulli(int n) {
	if (n < 0) { cerr << "index out of range" << endl; exit(1); }
	else if (n == 0) return 1;
	else if (n == 1) return Rational(-1, 2);
	if (n % 2) return 0;
	Rational r = 0;
	for (int k = 0; k < n; ++k) {
		r -= binomial(n + 1, k) * bernoulli(k);
	}
	r /= n + 1;
	return r;
}

int main()
{
	Rational r1(8, 8);
	Rational r2(5, 3);
	Rational r3(3, 2);
	Rational r4 = r3;

	Rational r5; 			//	+ 
	Rational r6; 			//	- 
	Rational r7; 			//	* 
	Rational r8;				//	/ 

	r5 = r2 + r4;
	r6 = r2 - r4;
	r7 = r2 * r4;
	r8 = r2 / r4;

	if (r1 == r3) //now cosider gcd 
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;

	std::cout << "r1 : " << r1 << std::endl;
	std::cout << "r2 : " << r2 << std::endl;
	std::cout << "r3 : " << r3 << std::endl;
	std::cout << "r4 : " << r4 << std::endl;
	std::cout << "r5 : " << r5 << std::endl;
	std::cout << "r6 : " << r6 << std::endl;
	std::cout << "r7 : " << r7 << std::endl;
	std::cout << "r8 : " << r8 << std::endl;
	cout << "toRational(0.75) is " << toRational(0.75, 5) << endl;



	cout << endl << "Test Bernoulli Numbers" << endl;
	cout << endl << "n\tBernoulli(n)" << endl;
	cout << "=================================" << endl;
	Rational b;
	for (int n = 0; n < 23; ++n) {
		if ((b = bernoulli(n)) != 0) cout << n << '\t' << b << endl;
	}

	cout << endl << "Test Harmonic Numbers" << endl;
	cout << "n\tEuler Approx. \tHarmonic(n)" << endl;
	for (int n = 1; n < 25; ++n) {
		Rational r = harmonic(n);
		double g = toDouble(r) - log(n);
		g -= (1.0 / (2 * n)) * (1.0 - (1.0 / (6 * n)));
		cout << n << '\t' << g << '\t' << r << endl;
	}
	return 0;
}
