/*
 ============================================================================
 Name        : 18(2)lx.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int jieceng(int a);
void main() {
	int x, sum=0,y;
	printf("请输入一个数字\n");
	fflush(stdout);
	scanf("%d", &y);
	fflush(stdin);
	for (x = 1; x <= y; x++) {
		sum = sum + jieceng(x);
	}
	printf("总和为%d", sum);
}

int jieceng(int a) {
	if (a == 1) {
		return 1;
	} else {
		return a * jieceng(a - 1);
	}
}
