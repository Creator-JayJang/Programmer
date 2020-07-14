#include <iostream>
#include "list.h"

int main()
{
	List list;
	// initList(&list); --> constructor

	list.insertFirstNode(4);		// [4]
	std::cout << list << std::endl;

	list.insertFirstNode(3);		// [3]
	std::cout << list << std::endl;

	list.insertFirstNode(1);		// [1]
	std::cout << list << std::endl;

	list.insertNode(1, 2);		// [1, 2, 3, 4]
	std::cout << list << std::endl;

	list.deleteNode(3);				// [1, 2, 4]
	std::cout << list << std::endl;

	// cleanuplist(&List); -> destructor	
	return 0;
}