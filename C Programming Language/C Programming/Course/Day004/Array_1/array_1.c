/*
	3명의 성적을 입력받아 총점과 평균을 계산하녕 출력하는 프로그램을 구현하시오.
	
	<입력형식 및 출력형식>
	1. 학생등록
	2. 점수확인
	3. 작업종료
	메뉴 = 

	// 첫번째학생
	국어 = 
	영어 = 
	수학 = 
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문


	int kor[3], eng[3], math[3], tot[3]; // 배열
	double avg[3];
	int menu, cnt = 0;

	while (1) {
		printf("학생 성적 관리 프로그램\n");
		printf("1. 학생등록\n");
		printf("2. 점수확인\n");
		printf("3. 작업종료\n");
		printf("메뉴 = ");
		scanf("%d", &menu);
			
		if (menu == 1) {// 학생등록
			if (cnt == 0) {
			printf("국어 = ");
			scanf("%d", &kor[0]);
			printf("영어 = ");
			scanf("%d", &eng[0]);
			printf("수학 = ");
			scanf("%d", &math[0]);

			tot[0] = kor[0] + eng[0] + math[0];
			avg[0] = tot[0] / 3.0;
			cnt++;
		}
			else if (cnt == 1) {
				printf("국어 = ");
				scanf("%d", &kor[1]);
				printf("영어 = ");
				scanf("%d", &eng[1]);
				printf("수학 = ");
				scanf("%d", &math[1]);
				tot[1] = kor[1] + eng[1] + math[1];
				avg[1] = tot[1] / 3.0;
				cnt++;
			}
			else if (cnt == 2) {
				printf("국어 = ");
				scanf("%d", &kor[2]);
				printf("영어 = ");
				scanf("%d", &eng[2]);
				printf("수학 = ");
				scanf("%d", &math[2]);
				tot[2] = kor[2] + eng[2] + math[2];
				avg[2] = tot[2] / 3.0;
				cnt++;
			}



			}
			else if (menu == 2) {// 점수확인



				if (cnt == 1) {
					printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
				}

				else if (cnt == 2) {
					printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
					printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
				}
				else if (cnt == 2) {
					printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
					printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
					printf("총점 = %d, 평균 = %.2lf\n", tot3, avg3);
				}
				else {
					printf("등록된 학생이 존재하지 않습니다.\n");
				}
				
			}

			else if (menu == 3) {// 작업종료

				printf("시스템을 종료합니다.\n");
				return 0;
			}
			else {
				printf("메뉴의 선택이 올바르지 않습니다\n");
			}

	}

	//// 입력문
	//printf("국어 = ");
	//scanf("%d", &kor);
	//printf("영어 = ");
	//scanf("%d", &eng);
	//printf("수학 = ");
	//scanf("%d", &math);

	//// 처리문
	//tot = kor + eng + math;
	//avg = tot / 3.0;

	//// 출력문
	//printf("총점 = %d, 평균 = %.2lf\n", tot, avg);

	return 0;
}	

//int kor, eng, math, tot, menu, cnt = 0;
//double avg;
//int kor1, eng1, math1, tot1;
//int kor2, eng2, math2, tot2;
//int kor3, eng3, math3, tot3;
//double avg1, avg2, avg3;

//// cnt = cnt++;
//				if (cnt > 3) {
//					printf("등록인원이 초과하였습니다.\n");
//				}
//				else {
//					printf("국어 = ");
//					scanf("%d", &kor);
//					printf("영어 = ");
//					scanf("%d", &eng);
//					printf("수학 = ");
//					scanf("%d", &math);
//
//					tot = kor + eng + math;
//					avg = tot / 3.0;
//
//					if (cnt == 1) {
//						kor1 = kor;
//						eng1 = eng;
//						math1 = math;
//						tot1 = tot;
//						avg1 = avg;
//					}
//					else if (cnt == 2){
//						kor2 = kor;
//						eng2 = eng;
//						math2 = math;
//						tot2 = tot;
//						avg2 = avg;
//					}
//					else {
//						kor3 = kor;
//						eng3 = eng;
//						math3 = math;
//						tot3 = tot;
//						avg3 = avg;
//					}
//
//				}

//else if (menu == 2) {// 점수확인
//if (cnt == 1) {
//	printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
//}
//
//else if (cnt == 2) {
//	printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
//	printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
//}
//else if (cnt == 2) {
//	printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
//	printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
//	printf("총점 = %d, 평균 = %.2lf\n", tot3, avg3);
//}
//else {
//	printf("등록된 학생이 존재하지 않습니다.\n");
//}
//
//			}
//
//else if (menu == 3) {// 작업종료
//
//printf("시스템을 종료합니다.\n");
//return 0;
//			}
//else {
//printf("메뉴의 선택이 올바르지 않습니다\n");
//			}
//
//	}