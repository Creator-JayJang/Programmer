#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int i;
	int lotto[7];

	srand(time(NULL));

	for (i = 0; i < 7; ++i)
	{
		lotto[i] = rand() % 45 + 1;


		if (lotto[i] == lotto[i + 1]) {
			//lotto[i] = rand() % 45 + 1;
			lotto[i] != lotto[i + 1];
			break;
		}
		printf("%d ", lotto[i]);
	}


	return 0;
}