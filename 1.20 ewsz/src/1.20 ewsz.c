/*
 ============================================================================
 Name        : 20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mainA(void) {
//	int n,x,y;
//	int sum=0;
//	printf("��������");
//	fflush(stdout);
//	scanf("%d",&n);
//	fflush(stdin);
//	int a[n][n];
//	for(x=0;x<n;x++){
//		for(y=0;y<n;y++){
//			printf("����������%d-%d",x+1,y+1);
//			fflush(stdout);
//			scanf("%d",&a[x][y]);
//			fflush(stdin);
//			if(x==y){
//				sum=sum+a[x][y];
//			}
//		}
//	}
//	printf("�ܺ�Ϊ%d",sum);

	int x, y = 0;
	int sum;
	int a[5][5] = { 1 };
//	for (x = 0; x < 5; x++) {
//		for (y = 0; y <= x; y++) {
//			if ((y == 0 || y == x)) {
//				a[x][y] = 1;
//			}
//			if (x >= 1 && y >= 1) {
//				a[x][y]=a[x-1][y-1]+a[x-1][y];
//			}
//			printf("%d", a[x][y]);
//		}
//		printf("\n");
//	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y <= x; y++) {
			if ((y == 0 || y == x)) {
				a[x][y] = 1;
			}
			if (x >= 1 && y >= 1) {
				a[x][y] = a[x - 1][y - 1] + a[x - 1][y];
			}
		}
	}
	int k;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5 - 1 - x; y++) {
			printf(" ");
		}
		for (k = 0; k <= x; k++) {
			printf("%d ", a[x][k]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}