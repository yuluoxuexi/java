/*
 ============================================================================
 Name        : 13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mainAAA() {

//	��ҵ1 1.����ɼ��жϳɼ��ĵȼ���60�������ǲ��ϸ�,30������Ҫ���ޣ�90�����������㣬60��90�����ã�
//	float a;
//	printf("������ɼ�\n");
//	fflush(stdout);
//	scanf("%f", &a);
//	fflush(stdin);
//	if (a < 0 || a > 100) {
//		printf("�ɼ��쳣");
//	} else if (a < 30) {
//		printf("����");
//	}else if ( a < 60) {
//		printf("���ϸ�");
//	} else if (a<90) {
//		printf("����");
//	} else {
//		printf("����");
//	}

//��ҵ2  2.��������������x,y,z,��������������С�������������Ҫ�����㷨��
//	X-y  x-z   y-z,  ����
//	��ඨ��4������
//	����һ

//	int x;
//	int y;
//	int z;
//	printf("������������\n");
//	fflush(stdout);
//	scanf("%d,%d,%d", &x, &y, &z);
//	fflush(stdin);
//	if (x > y && y > z) {
//		printf("%d,%d,%d",x,y,z);
//	} else if (x > z && z > y) {
//		printf("%d,%d,%d",x,z,y);
//	} else if (y > x && x > z) {
//		printf("%d,%d,%d",y,x,z);
//	} else if (y > z && z > x) {
//		printf("%d,%d,%d",y,z,x);
//	} else if (z > x && x> y) {
//		Printf("%d,%d,%d",z,x,y);
//	} else {
//		printf("%d,%d,%d",z,y,x);
//	}



//  ��ҵ��
//  ������һ��5λ�� 12345   45645 ���ж��ǲ��ǻ���
//	��λ����λ��ͬ && ʮλ��ǧλ��ͬ  ���ǻ��� 12321
//	���:��ʮǧ��Ȼ��Ƚ�
	int num;
	printf("������һ����λ��\n");
	fflush(stdout);
	scanf("%d",&num);
	int a=num/10000;//��λ
	int b=num%10;//��λ
	int c=num/1000%10;//ǧλ
	int d=num/10%10;//ʮλ
	if (a==b && c==d){
		printf("�ǻ�����");
	} else {
		printf("���ǻ�����");
	}


}

//return EXIT_SUCCESS;
