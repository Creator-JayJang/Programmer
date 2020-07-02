/*
   2차원 배열
   int 배열명[첨자1=행][첨자2=열];
*/

#include<stdio.h>

int main() {
    int x[][3] = { 1,2,3,4,5,6 };
    /*
      x[0][0] = 0
      x[0][1]
      x[0][2]

      x[1][0]
      x[1][1]
      x[1][2]
    */

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("x[%d][%d] = %3d\n", i, j, x[i][j]);
        }
        printf("\n");
    }

    return 0;
}