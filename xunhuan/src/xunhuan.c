/*
 ============================================================================
 Name        : xunhuan.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mainE() {
//	����1
//	int i=0;
//	for(;i<10;i++){
//		printf("******\n");
//	}

//  ��ҵ2
//	int i = 0;
//	for (; i < 10; i++) {
//		if (i == 0 || i == 10) {
//			printf("******\n");
//		} else {
//			printf("*    *\n");
//		}
//	}

//  ��ҵ3
	int a,b,c;
	for(a=1;a<10;a++){
		for(b=1;b<=a;b++){
	int c=a*b;
		printf("%dx%d=%d\t",a,b,c);
	}
		printf("\n");
	}
}

//	return EXIT_SUCCESS;
