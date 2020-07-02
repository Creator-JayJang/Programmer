/*
   배열의 선언과 활용
*/

#include<stdio.h>

int main() {
    // 선언문
    int x[5] = { 0 };
    char y[5] = { 'A', 'B', 'C', 'D', 'F' };
    double z[5] = { 1.1, 1.3 }; // 배열의 크기보다 적게 초기화되면 빈공간은 0


    for (int i = 0; i < 5; i++) {
        printf("x[%d] = %d\n", i, x[i]);
        printf("y[%d] = %c\n", i, y[i]);
        printf("z[%d] = %lf\n", i, z[i]);
    }

    printf("x배열의 크기 : %d\n", sizeof(x));
    printf("x[0]의 크기 : %d\n", sizeof(x[0]));

    return 0;
}