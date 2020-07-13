#include <iostream>
#include <fstream>

int main()
{
	std::ofstream out("iotest.out");
	if (!out) {
		std::cerr << "cann't open file iotest.out" << std::endl;
		return -1;
	}

	for (int i = 1; i <= 100; ++i)
		out << 1.0 / i << std::endl;

	double sum = 0.0;
	std::ifstream in("iotest.out");
	if (!in) {
		std::cerr << "cann't open file iotest.out" << std::endl;
		return -2;
	}

	double d;
	while (in >> d)
		sum += d;

	std::cout << "sum : " << sum << std::endl;
	return 0;
}
