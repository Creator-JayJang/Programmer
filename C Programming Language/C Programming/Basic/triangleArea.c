#include <stdio.h>

int main(void)
{
	int width, height;
	double area;

	printf("input width and heihgt :");
	//scanf("%d", &width);
	//scanf("%d", &height);
	scanf("%d %d", &width, &height);
	area = 1.0 / 2.0 * width * height;

	printf("area: %.1f\n", area);

	return 0;
}