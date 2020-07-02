/*
  다섯개의 정수를 입력받아 합과 최대값을 출력하는 프로그램을 구현하시오.
  단, 입력받는 정수는 배열을 선언하여 저장한 후 처리할 것.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// 함수 정의부
int maxinum(int a[], int size) {
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max) max = a[i];
    }

    return max;
}

int main() {
    // 선언문
    int data[5], sum = 0, max;

    // 입력문
    for (int i = 0; i < 5; i++) {
        printf("%d번째 수 = ", i+1);
        scanf("%d", &data[i]);

        sum += data[i]; // sum = sum + data[i];
    }

    // 처리문 - 최대값을 계산하는 로직
    max = maxinum(data, 5); // 배열명은 배열의 시작주소와 동일하다.
    
    // 출력문
    printf("입력받은 자료 : ");
    for (int i = 0; i < 5; i++) {
        printf("%5d", data[i]);
    }

    printf("\n합계 = %d, 최대값 = %d\n", sum, max);

    return 0;
}