/*
 ============================================================================
 Name        : demo3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//��ҵ1
void mainC() {
//	float pi = 3.14159;
//	float r = 1.5, h = 2.0; //r=�뾶 h=�߶�
//	float v = pi*r*r*h;     //v=���
//	printf("v=%7.2f\n",v);

//��ҵ2
//	double pi = 3.14159;
//	double r;               //r=�뾶
//	double h;               //h=�߶�
//	printf("������뾶r=");
//	fflush(stdout);
//	scanf("%lf", &r);
//	fflush(stdin);
//	printf("�������h=");
//	fflush(stdout);
//	scanf("%lf", &h);
//	fflush(stdin);
//	double v = pi * r * r * h;  //v���=pi*�뾶��ƽ��*��
//	printf("Բ�������Ϊ%7.2f", v);

//��ҵ3
//	float a,b,c;
//	printf("�����������˵ķ������ö��Ÿ���\n");
//	fflush(stdout);
//	scanf("%f,%f,%f",&a,&b,&c);
//	fflush(stdin);
//	float d=a+b+c;
//	printf("����������ܺ�Ϊ%.2f\n",d);
//	fflush(stdout);
//	float e=(a+b+c)/3;
//	printf("���������ƽ����Ϊ%.2f\n",e);

//��ҵ4
	float a;
	printf("������ѧ���ɼ�\n");
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);
	printf(	(a <= 100) && (a >= 90) ?
					"�ȼ�A" :
					((a < 90) && (a >= 60) ? "�ȼ�B" : "�ȼ�C"));

	//return EXIT_SUCCESS;

}
