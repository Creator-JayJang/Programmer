/*
    자동판매기 프로그램
    주어진 입출력 형식에 맞는 프로그램을 구현하시오.

    <입력 및 출력형식>
    투입구에 돈을 입력하세요.
    money = 0
    money = -1000
    money = 1000

    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 1

    coffee가 나왔습니다.
    현재 고객님 잔액은 700원입니다.

    구매계속(y/n) = y
    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 4

    ice coffee가 나왔습니다.
    현재 고객님 잔액은 0원입니다.

    안녕히가셰요.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    int money, jandon ;
    int sub[4] = { 0 };
    char* title[4] = { "coffee", "black", "milk","ice" };

    // 선언문
    printf("투입구에 돈을 입력하세요.\n money =\n");
    scanf("%d", &money);

    printf("========================\n 1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)\n ========================\n");
    
    printf("menu =\n");

    money - sub[i]

    printf("%s =", title[i]);
    scanf("%d", &sub[i]);

    printf("title[i]가 나왔습니다.\n 현재 고객님 잔액은 %d 원입니다\n")
      

    return 0;
}