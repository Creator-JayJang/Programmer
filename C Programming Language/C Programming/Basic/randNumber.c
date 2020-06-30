#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL)); 		// seed



	int i = 1;
	while (i <= 10)
	{
		//printf("%d\n",i);

		int dice = rand() % 6 + 1;
		printf("%d\n", dice);

		++i;

	}

	return 0;
}