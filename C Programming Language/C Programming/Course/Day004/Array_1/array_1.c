/*
	3���� ������ �Է¹޾� ������ ����� ����ϳ� ����ϴ� ���α׷��� �����Ͻÿ�.
	
	<�Է����� �� �������>
	1. �л����
	2. ����Ȯ��
	3. �۾�����
	�޴� = 

	// ù��°�л�
	���� = 
	���� = 
	���� = 
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����


	int kor[3], eng[3], math[3], tot[3]; // �迭
	double avg[3];
	int menu, cnt = 0;

	while (1) {
		printf("�л� ���� ���� ���α׷�\n");
		printf("1. �л����\n");
		printf("2. ����Ȯ��\n");
		printf("3. �۾�����\n");
		printf("�޴� = ");
		scanf("%d", &menu);
			
		if (menu == 1) {// �л����
			if (cnt == 0) {
			printf("���� = ");
			scanf("%d", &kor[0]);
			printf("���� = ");
			scanf("%d", &eng[0]);
			printf("���� = ");
			scanf("%d", &math[0]);

			tot[0] = kor[0] + eng[0] + math[0];
			avg[0] = tot[0] / 3.0;
			cnt++;
		}
			else if (cnt == 1) {
				printf("���� = ");
				scanf("%d", &kor[1]);
				printf("���� = ");
				scanf("%d", &eng[1]);
				printf("���� = ");
				scanf("%d", &math[1]);
				tot[1] = kor[1] + eng[1] + math[1];
				avg[1] = tot[1] / 3.0;
				cnt++;
			}
			else if (cnt == 2) {
				printf("���� = ");
				scanf("%d", &kor[2]);
				printf("���� = ");
				scanf("%d", &eng[2]);
				printf("���� = ");
				scanf("%d", &math[2]);
				tot[2] = kor[2] + eng[2] + math[2];
				avg[2] = tot[2] / 3.0;
				cnt++;
			}



			}
			else if (menu == 2) {// ����Ȯ��



				if (cnt == 1) {
					printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
				}

				else if (cnt == 2) {
					printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
					printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
				}
				else if (cnt == 2) {
					printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
					printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
					printf("���� = %d, ��� = %.2lf\n", tot3, avg3);
				}
				else {
					printf("��ϵ� �л��� �������� �ʽ��ϴ�.\n");
				}
				
			}

			else if (menu == 3) {// �۾�����

				printf("�ý����� �����մϴ�.\n");
				return 0;
			}
			else {
				printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�\n");
			}

	}

	//// �Է¹�
	//printf("���� = ");
	//scanf("%d", &kor);
	//printf("���� = ");
	//scanf("%d", &eng);
	//printf("���� = ");
	//scanf("%d", &math);

	//// ó����
	//tot = kor + eng + math;
	//avg = tot / 3.0;

	//// ��¹�
	//printf("���� = %d, ��� = %.2lf\n", tot, avg);

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
//					printf("����ο��� �ʰ��Ͽ����ϴ�.\n");
//				}
//				else {
//					printf("���� = ");
//					scanf("%d", &kor);
//					printf("���� = ");
//					scanf("%d", &eng);
//					printf("���� = ");
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

//else if (menu == 2) {// ����Ȯ��
//if (cnt == 1) {
//	printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
//}
//
//else if (cnt == 2) {
//	printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
//	printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
//}
//else if (cnt == 2) {
//	printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
//	printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
//	printf("���� = %d, ��� = %.2lf\n", tot3, avg3);
//}
//else {
//	printf("��ϵ� �л��� �������� �ʽ��ϴ�.\n");
//}
//
//			}
//
//else if (menu == 3) {// �۾�����
//
//printf("�ý����� �����մϴ�.\n");
//return 0;
//			}
//else {
//printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�\n");
//			}
//
//	}