/*
 ============================================================================
 Name        : zhizhenzy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//int pjcj1(int *aa);
int diaohuan2(int *a);
//int diaohuan1(int *i, int *j, int *k);
int main(void) {
//	��ҵ1
//	Ҫ��ӿ���̨����3��ѧ���ĳɼ���ֵ������
//	����һ��������Σ�ѧ���ɼ����飬ѧ���ĸ�����������ѧ����ƽ���ɼ������Ұ�ƽ���ɼ�����
//	�������е�������ĺ��������Ҵ�ӡѧ����ƽ����
//	int a[3];
//	int x;
//	for (x = 0; x < 3; x++) {
//		printf("����ѧ���ɼ�\n");
//		fflush(stdout);
//		scanf("%d", &a[x]);
//		fflush(stdin);
//	}
//	for (x = 0; x < 3; x++) {
//		printf("%d ", a[x]);
//	}
//	int *aa = a;
//	int sum;
//	sum = pjcj1(aa);
//	printf("%d", sum);

//    ��ϰ2��  ��2��ѧ����ÿ��ѧ����3�ųɼ���Ҫ����Ϊ��ά����
//    ��������Σ�2��ѧ��ÿ��ѧ��3�ųɼ���ά���飬 ƽ�������飩������ÿ��ѧ���Լ���ƽ����
//    ��������������ĺ��������������д�ӡÿ��ѧ����ƽ����

//	int a[2][3];
//	int x, y;
//	int *aa = a[0];
//	int *bb = a[1];
//	int sum1,sum2;
//	for (x = 0; x < 2; x++) {
//		for (y = 0; y < 3; y++) {
//			printf("�������%d��ѧ���ĵ�%d�ųɼ�\n", x + 1, y + 1);
//			fflush(stdout);
//			scanf("%d", &a[x][y]);
//			fflush(stdin);
//		}
//		if(x==0){
//			sum1=pjcj1(aa);
//		}
//		if(x==1){
//			sum2=pjcj1(bb);
//		}
//	}
//	printf("��һ��ѧ����ƽ���ɼ�Ϊ%d,�ڶ���ѧ����ƽ���ɼ�Ϊ%d",sum1,sum2);
//  ��ҵ3
//	����������3��int������3��ָ��ָ��3��int
//	��������д�ж����a>b ���ú�������   a>c���ú�������  b>c���ú�������
//	����:�����������ָ��int��ָ��
//	����һδ���
	int a[3] = { 2, 3, 1 };
	int *aa = a;
	int x;
	 diaohuan2(aa);
	for (x = 0; x < 3; x++) {
		printf("%d", a[x]);
	}

	//	������
//	int x = 1, y = 3, z = 2;
//	int a;
//	int *i=x,*j=y,*k=z;
//	for(a=0;a<3;a++){
//		diaohuan1(i,j,k);
//	}
//	printf("%d,%d,%d",x,y,z);

	return EXIT_SUCCESS;
}

//int pjcj1(int *aa) {
//	int x, sum = 0;
//	for (x = 0; x < 3; x++) {
//		sum += *aa;
//		aa++;
//	}
//	return sum = sum / 3;
//}

int diaohuan2(int *a) {
	static int aa[3];
	a = aa;
	int x = 0;
	int y, z;
	for (x = 0; x < 1; x++) {
		for (y = 0; y < 2 - x; y++) {
			if (aa[y] > aa[y + 1]) {
				aa[y] = z;
				z = aa[y + 1];
				aa[y + 1] = aa[y];
			}
		}
	}
	return *a;
}

