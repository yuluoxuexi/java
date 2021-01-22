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
//	作业1
//	要求从控制台输入3个学生的成绩赋值给数组
//	定义一个函数入参（学生成绩数组，学生的个数），计算学生的平均成绩，并且把平均成绩返回
//	主函数中调用上面的函数，并且打印学生的平均分
//	int a[3];
//	int x;
//	for (x = 0; x < 3; x++) {
//		printf("输入学生成绩\n");
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

//    练习2：  有2个学生，每个学生有3门成绩，要求定义为二维数组
//    函数：入参（2个学生每个学生3门成绩二维数组， 平均分数组），计算每个学生自己的平均分
//    主函数调用上面的函数，在主函数中打印每个学生的平均分

//	int a[2][3];
//	int x, y;
//	int *aa = a[0];
//	int *bb = a[1];
//	int sum1,sum2;
//	for (x = 0; x < 2; x++) {
//		for (y = 0; y < 3; y++) {
//			printf("请输入第%d个学生的第%d门成绩\n", x + 1, y + 1);
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
//	printf("第一个学生的平均成绩为%d,第二个学生的平均成绩为%d",sum1,sum2);
//  作业3
//	主函数定义3个int，定义3个指针指向3个int
//	主函数中写判断如果a>b 调用函数交换   a>c调用函数交换  b>c调用函数交换
//	函数:函数的入参是指向int的指针
//	方法一未完成
	int a[3] = { 2, 3, 1 };
	int *aa = a;
	int x;
	 diaohuan2(aa);
	for (x = 0; x < 3; x++) {
		printf("%d", a[x]);
	}

	//	方法二
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

