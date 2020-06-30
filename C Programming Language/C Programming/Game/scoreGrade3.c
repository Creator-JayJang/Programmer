#include <stdio.h>

int main() {

	char grades[] = { 'F','F','F','F','F','F','E','D','C','B','A','A' };


	int score;
	printf("input score : ");
	scanf("%d", &score);


	printf("score : %d --- grade : %c\n", score, grade[score / 10]);

	return 0;
}