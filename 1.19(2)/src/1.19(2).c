/*
 ============================================================================
 Name        : 19(2).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//有一个数组可以直接定义，将数组原来的内容正序输出（不需要排序），逆序输出（不需要排序）
//	int x;
//	int n=6;
//	int a[]={15,26,4,1,20,3};
//	for(x=0;x<n;x++){
//		printf("%d ",a[x]);
//	} printf("\n");
//	for(x=n-1;x>=0;x--){
//		printf("%d ",a[x]);
//	}

//	int n = 6;
//	int a[6] = { 15, 26, 4, 1, 20, 3 };
//	int bl = 0, y = 1;
//	int x;
//	for (x = n/2; x < n; x++) {
//		bl = a[x];
//		a[x] = a[x - y];
//		a[x - y] = bl;
//		y=y+2;
//	}
//	int b;
//	for (b = 0; b < n; b++) {
//		printf("%d ", a[b]);
//	}

	int n = 11;
	int x, y, bl, k,d;
	int c[11] = { 15, 26, 4, 1, 20, 3, 11, 5, 9, 6,};
	for (x = 0; x < n - 1; x++) {
		for (y = 0; y < n - 1 - x; y++) {
			if (c[y] > c[y + 1]) {
				bl = c[y];
				c[y] = c[y + 1];
				c[y + 1] = bl;
			}
		}
	}
	for (k = 0; k < n; k++) {
		printf("%d ", c[k]);
	}
	int z;
	printf("请输入一个大于0的数\n");
	fflush(stdout);
	scanf("%d",&z);
	fflush(stdin);
	if(z<=0){
		printf("输入错误");
		exit(0);
	}
	for(x=0;x<n;x++){
		if(z<c[x]){
			d=x;
			break;
		}
	}
	for(x=0;x<d-1;x++){
		c[x]=c[x+1];
	}
	c[x]=z;
	for (k = 0; k < n; k++) {
		printf("%d ", c[k]);
	}





	return EXIT_SUCCESS;
}
