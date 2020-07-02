#pragma once
#include<stdio.h>
#pragma warning(disable:4996)

// 전역변수
int kor = 0, eng = 0, math = 0, tot = 0;
double avg = 0.0;

void input() {
	printf("국어 = ");
	scanf("%d", &kor);
	printf("영어 = ");
	scanf("%d", &eng);
	printf("수학 = ");
	scanf("%d", &math);
}

void process() {
	tot = kor + eng + math;
	avg = tot / 3.0;
}

void output() {
	printf("총점 = %d, 평균 = %.2lf\n", tot, avg);
}