#pragma once
#include<stdio.h>
#pragma warning(disable:4996)

// ��������
int kor = 0, eng = 0, math = 0, tot = 0;
double avg = 0.0;

void input() {
	printf("���� = ");
	scanf("%d", &kor);
	printf("���� = ");
	scanf("%d", &eng);
	printf("���� = ");
	scanf("%d", &math);
}

void process() {
	tot = kor + eng + math;
	avg = tot / 3.0;
}

void output() {
	printf("���� = %d, ��� = %.2lf\n", tot, avg);
}