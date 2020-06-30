#include <stdio.h>

int main() {

	//int score1, score2, score3, score4, score5, 
	//int score6, score7, score8, score9, score10;

	int scores[10];   // 11num

/*	scanf("%d", &score1);
	scanf("%d", &score2);
	...
	scanf("%d", &score10); */

	for (int i = 0; i < 10; ++i) // 10 < 11 num
		scanf("%d", &scores[i]);

	//		int sum = score1+ score2+ score3+ score4+ score5+ score6+ score7+ score8+ score9+ score10;					

	int sum = 0;
	for (int i = 0; i < 10; ++i)
		sum = sum + scores[i];			// sum += scores[i];

	double average = (double)sum / 10;

	printf("sum : %d\taverage: %.2f\n", sum, average);

	return 0;
}