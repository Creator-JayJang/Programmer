/*
   ����ó�����α׷�
   1�ܰ� : ����, ����, ���������� �Է¹޾� ������ ����� ���
   2�ܰ� : ���� ���(switch~case)
   3�ܰ� : do~while���� �̿��Ͽ� ������ ������ ����
           �� ������ ������ 0 ~ 100���̸� �Է��ϵ�, ����� �ٽ� �Է�
   4�ܰ� : �迭�� Ȱ��
   5�ܰ� : 5���� ������ ó���� �� �ֵ��� 2���� �迭�� Ȱ���� ��.
          ���� : �� ���� ������ ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
   6�ܰ� : ����ü�� Ȱ��
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // ����
    int score[5][4] = { 0 }; // ����(0), ����(1), ����(2), ����(3)
    double avg[5];
    int totKor = 0, totEng = 0, totMath = 0;

    //char kor[] = "����";
    char* kor = "����";
    //char eng[] = "����";
    char* eng = "����";
    //char math[] = "����";
    char* math = "����";

    //char sub[3][5] = {"����", "����", "����"};
    char* sub[3] = { "����", "����", "����" };

    for (int ����� = 0; ����� < 5; �����++) {
        printf("%d��° ����� ���� �Է�\n", �����);

        /*do {
            printf("%s = ", sub[0]);
            scanf("%d", &score[�����][0]);
        } while (score[�����][0] < 0 || score[�����][0] > 100);

        do {
            printf("%s = ", sub[1]);
            scanf("%d", &score[�����][1]);
        } while (score[�����][1] < 0 || score[�����][1] > 100);

        do {
            printf("%s = ", sub[2]);
            scanf("%d", &score[�����][2]);
        } while (score[�����][2] < 0 || score[�����][2] > 100);*/

        for (int k = 0; k < 3; k++) {
            do {
                printf("%s = ", sub[k]);
                scanf("%d", &score[�����][k]);
            } while (score[�����][k] < 0 || score[�����][k] > 100);
            score[�����][3] += score[�����][k];
        }

        //score[�����][3] = score[�����][0] + score[�����][1] + score[�����][2];
        avg[�����] = score[�����][3] / 3.0;

    }

    for (int ����� = 0; ����� < 5; �����++) {
        printf("\n���� = %d, ��� = %.2lf\n", score[�����][3], avg[�����]);
    }

    printf("���� ���� ���\n");
    for (int ����� = 0; ����� < 5; �����++) {
        totKor += score[�����][0];
       
    }
 printf("\n������ = %d",totKor);
    return 0;
}