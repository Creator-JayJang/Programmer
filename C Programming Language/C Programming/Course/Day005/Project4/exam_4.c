/*
  scanf() 함수를 이용하여 문자열을 입력받아 배열에 저장한 후
  출력하는 프로그램을 구현하시오.

  %s
  %c

  <입력및 출력형식>
  문자열 =

  입력받은 문자열 :
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // 선언문
    char str[80];       // 영문자 79, 한글 39
    int index = 0;      // 배열의 위치값

    printf("문자열 = ");
    scanf("%s", str);
    printf("입력받은 문자열 : %s\n", str);

    /*  문자 단위로 출력  */
    while (str[index] != '\0') {
        printf("%c", str[index]);
        index++;

    }

    printf("\n");

    return 0;
}