/*
 ============================================================================
 Name        : 21zy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//float pjcj1(int *aa);//��ҵ1 2
//void diaohuan1(int *a, int *b, int *c);//��ҵ3
int changdu(char *p); //��ҵ4

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
//	float *aa = a;
//	float sum;
//	sum = pjcj1(aa);
//	printf("%.2f", sum);

//    ��ϰ2��  ��2��ѧ����ÿ��ѧ����3�ųɼ���Ҫ����Ϊ��ά����
//    ��������Σ�2��ѧ��ÿ��ѧ��3�ųɼ���ά���飬 ƽ�������飩������ÿ��ѧ���Լ���ƽ����
//    ��������������ĺ��������������д�ӡÿ��ѧ����ƽ����

//	int a[2][3];
//	int x, y;
//	int *aa = a[0];
//	int *bb = a[1];
//	float sum1,sum2;
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
//	printf("��һ��ѧ����ƽ���ɼ�Ϊ%.2f,�ڶ���ѧ����ƽ���ɼ�Ϊ%.2f",sum1,sum2);

//  ��ҵ3
//	����������3��int������3��ָ��ָ��3��int
//	��������д�ж����a>b ���ú�������   a>c���ú�������  b>c���ú�������
//	����:�����������ָ��int��ָ��

//	int x = 4, y = 1, z = 2;
//	int *i = &x, *j = &y, *k = &z;
//	diaohuan1(i, j, k);
//	printf("%d,%d,%d", x, y, z);
//
//	��ϰ4��
//	��дһ�����������ַ����ĳ��ȣ����������е��ÿ��Դ�ӡ���ַ����ĳ���
//	While(xxx!=��\0��){
//	++ 	������Σ�char *p��
	char *aa[20];
	int y;
	printf("�������ַ���\n");
	fflush(stdout);
	scanf("%s",aa);
	fflush(stdin);
	y = changdu(aa);
	printf("%d", y);

	return EXIT_SUCCESS;
}
//��ҵ4
int changdu(char *p) {
	int x = 0;
	while (*p != '\0') {
		p++;
		x++;
	}
	return (x);
}
//��ҵ1 2
//float pjcj1(int *aa) {
//	float x, sum = 0;
//	for (x = 0; x < 3; x++) {
//		sum += *aa;
//		aa++;
//	}
//	return sum = sum / 3;
//}

//��ҵ3
//void diaohuan1(int *a, int *b, int *c) {
//	int i;
//	if (*a > *b) {
//		i = *a;
//		*a = *b;
//		*b = i;
//	}
//	if (*a > *c) {
//		i = *a;
//		*a = *c;
//		*c = i;
//	}
//	if (*b > *c) {
//		i = *b;
//		*b = *c;
//		*c = i;
//	}
//}

