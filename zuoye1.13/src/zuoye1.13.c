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

//	作业1 1.输入成绩判断成绩的等级（60分以下是不合格,30分以下要重修，90分以上是优秀，60到90是良好）
//	float a;
//	printf("请输入成绩\n");
//	fflush(stdout);
//	scanf("%f", &a);
//	fflush(stdin);
//	if (a < 0 || a > 100) {
//		printf("成绩异常");
//	} else if (a < 30) {
//		printf("重修");
//	}else if ( a < 60) {
//		printf("不合格");
//	} else if (a<90) {
//		printf("良好");
//	} else {
//		printf("优秀");
//	}

//作业2  2.请输入三个整数x,y,z,请输入三个数由小到大输出（不需要排序算法）
//	X-y  x-z   y-z,  交换
//	最多定义4个变量
//	方法一

//	int x;
//	int y;
//	int z;
//	printf("请输入三个数\n");
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



//  作业三
//  请输入一个5位数 12345   45645 ，判断是不是回文
//	个位和万位相同 && 十位和千位相同  才是回文 12321
//	求出:个十千万，然后比较
	int num;
	printf("请输入一个五位数\n");
	fflush(stdout);
	scanf("%d",&num);
	int a=num/10000;//万位
	int b=num%10;//个位
	int c=num/1000%10;//千位
	int d=num/10%10;//十位
	if (a==b && c==d){
		printf("是回文数");
	} else {
		printf("不是回文数");
	}


}

//return EXIT_SUCCESS;
