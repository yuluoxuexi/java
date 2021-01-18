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

//作业1
void mainC() {
//	float pi = 3.14159;
//	float r = 1.5, h = 2.0; //r=半径 h=高度
//	float v = pi*r*r*h;     //v=体积
//	printf("v=%7.2f\n",v);

//作业2
//	double pi = 3.14159;
//	double r;               //r=半径
//	double h;               //h=高度
//	printf("请输入半径r=");
//	fflush(stdout);
//	scanf("%lf", &r);
//	fflush(stdin);
//	printf("请输入高h=");
//	fflush(stdout);
//	scanf("%lf", &h);
//	fflush(stdin);
//	double v = pi * r * r * h;  //v体积=pi*半径的平方*高
//	printf("圆柱的体积为%7.2f", v);

//作业3
//	float a,b,c;
//	printf("请输入三个人的分数并用逗号隔开\n");
//	fflush(stdout);
//	scanf("%f,%f,%f",&a,&b,&c);
//	fflush(stdin);
//	float d=a+b+c;
//	printf("输入分数的总合为%.2f\n",d);
//	fflush(stdout);
//	float e=(a+b+c)/3;
//	printf("输入分数的平均数为%.2f\n",e);

//作业4
	float a;
	printf("请输入学生成绩\n");
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);
	printf(	(a <= 100) && (a >= 90) ?
					"等级A" :
					((a < 90) && (a >= 60) ? "等级B" : "等级C"));

	//return EXIT_SUCCESS;

}
