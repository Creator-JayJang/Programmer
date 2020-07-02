/*
*(p+0)= 1
*(p+1)=2
*/


#include<stdio.h>

int main() {
	int x[5] = { 1, 2, 3, 4, 5 };
	int* p;
	int sum = 0;
	int i;

	p = x; // 배열명은 배열의 시작주소와 같은 의미이다. 즉, x == &x[0] 
	printf("p = %d\n", p);
	/* x배열의 요소들의 합을 계산하여 sum 변수에 누적한 후 출력하는 로직 */

	// sum = x[0] + x[1] + x[2] + x[3] + x[4];

	for (i = 0; i < 5; i++) {
		// sum += x[i];
		sum += *p++;

	}


	printf("sum = %d\n", sum);
	printf("p = %d\n", p);
		return 0;
}