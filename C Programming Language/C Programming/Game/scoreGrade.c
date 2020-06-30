#include <stdio.h>

int main() {

	int score;
	printf("input score : ");
	scanf("%d", &score);
	char grade;

	if (score >= 90)
		// A
		grade = 'A';
	else if (score >= 80)
		// B
		grade = 'B';
	else if (score >= 70)
		// C 
		grade = 'C';
	else if (score >= 60)
		// D 
		grade = 'D';
	else
		//F
		grade = 'F';

	printf("score : %d --- grade : %c\n", score, grade);

	return 0;
}