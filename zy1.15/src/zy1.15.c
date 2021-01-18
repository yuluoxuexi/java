/*
 ============================================================================
 Name        : 15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mainDD() {
//     作业1
//	提供4个数字1,2,3,4，计算这4个数字可以组合成多少个三位数，要求三位数不能重复
//	结果：数字123 234 124 .................
//	结果：一共有几个
//	int x, y, z, a = 0;
//	for (x = 1; x <= 4; x++) {
//		for (y = 1; y <= 4; y++) {
//			for (z = 1; z <= 4; z++) {
//				if (x != y && y != z && x != z) {
//					a++;
//					printf("%d%d%d\t", x, y, z);
//				}
//			}
//		}
//		printf("\n");
//	}
//	printf("一共有%d个", a);
//	作业2
//	打印水仙花数，要求计算1000以内的三位数，各个位置上的数字的立方和等于数字的本身
//	结果：数字全部打印出来
//	100-999之间
//	153=1*1*1+5*5*5+3*3*3=153

//	int x = 100;
//	for (; x < 1000 && x >= 100;x++) {
//		int a = x / 100;
//		int b = x / 10 % 10;
//		int c = x % 10;
//	if(x==(a*a*a)+(b*b*b)+(c*c*c)){
//		printf("%d\n",x);
//	}
//	continue;
//

//	作业3
//	一个球从100米的高度丢下来，每次落地后反弹的高度是原本高度的一半，然后再次落下。
//	求第10次落地的时候一共经过了多少米，第10次反弹的高度是多少？
//	float x=0, sum=0;//x=高度 sum=总和
//	int y=0,z;//y=次数 z=基数
//	printf("请输入高度、次数，并用逗号隔开\n");
//	fflush(stdout);
//	scanf("%f,%d",&x,&y);
//	fflush(stdin);
//	for (z=0,sum=x; z<=y ; z++) {
//		x = x / 2;
//		sum = sum + x*2;
//	}
//	printf("第%d次落地的时候一共经过了%.4f米\n第%d次的反弹高度是%.4f", y, sum, y, x);

//	float x = 100, sum = 100; //x=高度 sum=总和
//	int y; //y=次数
//	for (y=1; y < 10; y++) {
//		x = x / 2;
//		sum = sum + x*2;
//	}
//	printf("第%d次落地的时候一共经过了%.4f米\n第%d次的反弹高度是%.4f", y, sum, y, x);

//	return EXIT_SUCCESS;
}
