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
//float pjcj1(int *aa);//作业1 2
//void diaohuan1(int *a, int *b, int *c);//作业3
int changdu(char *p); //作业4

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
//	float *aa = a;
//	float sum;
//	sum = pjcj1(aa);
//	printf("%.2f", sum);

//    练习2：  有2个学生，每个学生有3门成绩，要求定义为二维数组
//    函数：入参（2个学生每个学生3门成绩二维数组， 平均分数组），计算每个学生自己的平均分
//    主函数调用上面的函数，在主函数中打印每个学生的平均分

//	int a[2][3];
//	int x, y;
//	int *aa = a[0];
//	int *bb = a[1];
//	float sum1,sum2;
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
//	printf("第一个学生的平均成绩为%.2f,第二个学生的平均成绩为%.2f",sum1,sum2);

//  作业3
//	主函数定义3个int，定义3个指针指向3个int
//	主函数中写判断如果a>b 调用函数交换   a>c调用函数交换  b>c调用函数交换
//	函数:函数的入参是指向int的指针

//	int x = 4, y = 1, z = 2;
//	int *i = &x, *j = &y, *k = &z;
//	diaohuan1(i, j, k);
//	printf("%d,%d,%d", x, y, z);
//
//	练习4：
//	编写一个函数计算字符串的长度，在主函数中调用可以打印出字符串的长度
//	While(xxx!=’\0’){
//	++ 	函数入参（char *p）
	char *aa[20];
	int y;
	printf("请输入字符串\n");
	fflush(stdout);
	scanf("%s",aa);
	fflush(stdin);
	y = changdu(aa);
	printf("%d", y);

	return EXIT_SUCCESS;
}
//作业4
int changdu(char *p) {
	int x = 0;
	while (*p != '\0') {
		p++;
		x++;
	}
	return (x);
}
//作业1 2
//float pjcj1(int *aa) {
//	float x, sum = 0;
//	for (x = 0; x < 3; x++) {
//		sum += *aa;
//		aa++;
//	}
//	return sum = sum / 3;
//}

//作业3
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

