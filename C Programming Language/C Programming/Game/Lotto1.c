#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int lotto[7];

	srand(time(NULL));

	for (i = 0; i < 7; ++i)
	{
		lotto[i] = rand() % 45 + 1;
	}

	for (i = 0; i < 7; ++i)
	{
		lotto[i] = rand() % 45 + 1;
		printf("%d ", lotto[i]);
	}

	printf("\n ");
}


return 0;
	}