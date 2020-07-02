/* 
	2차원 배열 : 1차원 배열의 중복을 처리하기 위한 배열
	형식
		자료형 배열명[첨자1] [첨자2];
		또는
		자료형 배열명[첨자1] [첨자2] = {{...}, {....}};
		ex>
		int x[2][3];
		or
		int x[2][3] = {{1, 2, 3}, {4, 5, 6}};
		or
		int x[2][3] = {1, 2, 3, 4, 5, 6};
		or
		int x[][3] = {1, 2, 3, 4, 5, 6};



*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//int kor, eng, math, tot;
	int x[3][4] = { 0 }; //3명의 점수가 필요 국.영.수, 총점이 저장될 배열

	/*
		x[0] = kor
		x[1] = eng
		x[2] = math	
		x[3] = tot
	*/

	double avg[3];

	for (int inwon = 0; inwon < 3; inwon++) {// 사람수만큼 동작하도록 만들 for문
	for(int sub = 0; sub < 3; sub++ ){
		printf("%d 번째 과목 점수 = ",sub);
		scanf("%d", &x[inwon][sub]);
		
		// 총점을 누적
		xf[inwon] = x[inwon][sub];

		avg[inwon], 
		for (int inwon = 0; inwon < 3; inwon++) {// 사람수만큼 동작하도록 만들 for문
			for (int sub = 0; sub < 3; sub++) {
				printf("%d 번째 과목 점수 = ", sub);
				scanf("d", &x[3]; [sub] );
	x[3] = x[0] + x[1] + x[2];
	avg = x[3] / 3.0;
	
	printf("총점 = %d, 평균 = %.2lf\n ", x[3], avg);
	/*printf("x배열의 전체 크기 = %d \n ", sizeof(x));
	printf("x[0] 요소의 크기 = %d \n ", sizeof(x[0]));*/

	return 0;
}