//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//	int kor, eng, math, tot;
//	double avg;
//
//	printf("국어 =");
//	scanf("%d", &kor);
//	printf("영어 =");
//	scanf("%d", &eng);
//	printf("수학 =");
//	scanf("%d", &math);
//
//	tot = kor + eng + math;
//	avg = tot / 3.0;
//
//	printf("총점 = %d, 평균 % .2lf\n", tot, avg);
//
//	return 0;
//}

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//int kor, eng, math, tot;
	int sub[4] = {0};
	/* sub[0] = kor, sub[1] = eng, sub[2] = math,  sub[3] = tot */
	double avg;
	//char* kkk = "국어";	//	char* kkk
	//char* ccc = "영어";
	//char* ddd = "수학";

	char* title[3] = { "국어", "영어", "수학" };

	/*printf("%s =", title[0]);
	scanf("%d", &sub[0]);

	printf("%s =", title[1]);
	scanf("%d", &sub[1]);

	printf("%s =", title[2]);
	scanf("%d", &sub[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("%s =", title[i]);
		scanf("%d", &sub[i]);
		sub[3] += sub[i];
	}

	//sub[3] = sub[0] + sub[1] + sub[2];
	avg = sub[3] / 3.0;

	printf("총점 = %d, 평균 % .2lf\n", sub[3], avg);

	return 0;
}