/*
 * zfc.c
 *
 *  Created on: 2021年1月20日
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mainB() {
//  作业1
//练习：请输入5个学生的姓名（字符串），要求找出姓名最小的那个学生名字是什么？
//	int x,n;
//	char a[5][20]={"aaa","xxx","zzz","eee","ddd"};
//	for(x=0;x<4;x++){
//		n=strcmp(a[x],a[x+1]);
//		if(n<0){
//			strcpy(a[x+1],a[x]);
//		}
//	}
//	printf("%s",a[4]);
//	作业2
//	练习：请输入5个字符串，进行冒泡排序
//	char b[5][20] = { "ccc", "bbb", "www", "aaa", "eee" };
//	int x, y;
//	char a[20];
//	for (x = 0; x < 5-1; x++) {
//		for (y = 0; y < 5 - x - 1; y++) {
//			if (strcmp(b[y], b[y + 1]) > 0) {
//				strcpy(a, b[y]);
//				strcpy(b[y], b[y + 1]);
//				strcpy(b[y + 1], a);
//			}
//		}
//	}
//	for(x=0;x<5;x++){
//		printf("%s ",b[x]);
//	}

//	作业3
//	练习：请输入用户名（字符串）和密码（字符串），进行比较用户名固定是admin,密码固定是123
//	成功就退出
//	失败要显示：用户名和密码错误1次，请重新输入
//	最多可以输入5次，5次过后还不正确就提示您的银行卡已经被锁住，并退出
	char a[6] = { "admin" };
	char b[4] = { "123" };
	char c[20];
	char d[20];
	int x;
	for (x = 0; x < 5; x++) {
		printf("请输入用户名\n");
		fflush(stdout);
		scanf("%s", c);
		fflush(stdin);
		printf("请输入密码\n");
		fflush(stdout);
		scanf("%s", d);
		fflush(stdin);
		if (strcmp(a, c) == 0 && strcmp(b, d) == 0) {
			printf("账号密码输入正确");
			exit(0);
		} else if (x == 4) {
			break;
		} else {
			printf("用户名或密码输入错误%d次，请重新输入\n", x + 1);
		}
	}
	printf("输入错误您的银行卡已经被锁住");

}
