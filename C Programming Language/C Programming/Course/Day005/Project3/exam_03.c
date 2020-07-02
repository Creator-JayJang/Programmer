/*
   배열을 이용한 문자열 관리
*/

#include<stdio.h>

int main() {
    char str[] = { 'G', 'o', 'o', 'd' };
    char str2[] = "Good";

    printf("str : %s\n", str);
    printf("str2 : %s\n", str2);

    printf("str의 크기 : %d\n", sizeof(str));
    printf("str[0]의 크기 : %d\n", sizeof(str[0]));

    return 0;
}