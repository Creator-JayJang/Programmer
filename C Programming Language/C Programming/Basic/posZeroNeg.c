#include <stdio.h>

int main() {

	int num;
	printf("input num: ");
	scanf("%d", &num);

	/*if (num > 0)
		// positive number
		printf("num : %d is a positive number\n", num);
	else if (num == 0)
		printf("num : %d is a zero number\n", num);
		//zero
	else
		printf("num : %d is a negative number\n", num);
		// negative number
*/

	printf("num : %d is a %s number\n",
		(num > 0) ? "positive" : (num == 0) ? "zero" : "negative");

	return 0;
}
v