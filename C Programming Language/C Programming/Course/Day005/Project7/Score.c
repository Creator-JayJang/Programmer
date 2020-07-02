/*
   성적처리프로그램
   1단계 : 국어, 영어, 수학점수를 입력받아 총점과 평균을 계산
   2단계 : 학점 계산(switch~case)
   3단계 : do~while문을 이용하여 점수의 범위를 제한
           각 과목의 점수는 0 ~ 100사이만 입력하되, 벗어나면 다시 입력
   4단계 : 배열을 활용
   5단계 : 5명의 성적을 처리할 수 있도록 2차원 배열을 활용할 것.
          번외 : 각 과목별 총점을 계산하여 출력하는 프로그램을 구현하시오.
   6단계 : 구조체를 활용
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // 선언문
    int score[5][4] = { 0 }; // 국어(0), 영어(1), 수학(2), 총점(3)
    double avg[5];
    int totKor = 0, totEng = 0, totMath = 0;

    //char kor[] = "국어";
    char* kor = "국어";
    //char eng[] = "영어";
    char* eng = "영어";
    //char math[] = "수학";
    char* math = "수학";

    //char sub[3][5] = {"국어", "영어", "수학"};
    char* sub[3] = { "국어", "영어", "수학" };

    for (int 사람수 = 0; 사람수 < 5; 사람수++) {
        printf("%d번째 사람의 점수 입력\n", 사람수);

        /*do {
            printf("%s = ", sub[0]);
            scanf("%d", &score[사람수][0]);
        } while (score[사람수][0] < 0 || score[사람수][0] > 100);

        do {
            printf("%s = ", sub[1]);
            scanf("%d", &score[사람수][1]);
        } while (score[사람수][1] < 0 || score[사람수][1] > 100);

        do {
            printf("%s = ", sub[2]);
            scanf("%d", &score[사람수][2]);
        } while (score[사람수][2] < 0 || score[사람수][2] > 100);*/

        for (int k = 0; k < 3; k++) {
            do {
                printf("%s = ", sub[k]);
                scanf("%d", &score[사람수][k]);
            } while (score[사람수][k] < 0 || score[사람수][k] > 100);
            score[사람수][3] += score[사람수][k];
        }

        //score[사람수][3] = score[사람수][0] + score[사람수][1] + score[사람수][2];
        avg[사람수] = score[사람수][3] / 3.0;

    }

    for (int 사람수 = 0; 사람수 < 5; 사람수++) {
        printf("\n총점 = %d, 평균 = %.2lf\n", score[사람수][3], avg[사람수]);
    }

    printf("과목별 총점 출력\n");
    for (int 사람수 = 0; 사람수 < 5; 사람수++) {
        totKor += score[사람수][0];
       
    }
 printf("\n국총점 = %d",totKor);
    return 0;
}