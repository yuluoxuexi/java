/*
 ============================================================================
 Name        : zhizhen.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fangfa5(int x,int y){
	int z;
	z=x;
	x=y;
	y=z;
}
void fangfa6(int x[]){
	int z;
	z=x[0];
	x[0]=x[1];
	x[1]=z;
}


int main(void) {
//	int aa[5], *paa;
//	paa = aa;
//	int x;
//	for (x = 0; x < 5; x++) {
//		*paa = x;
//		printf("%d ", *paa++);
//	}
//	printf("\n");
//	for (x = 0; x < 5; x++) {
//		printf("%d ", aa[x]);
//	}
	int a[2]={1,2};
	fangfa5(a[0],a[1]);
	printf("%d,%d\n",a[0],a[1]);
	fangfa6(a);
	printf("%d,%d",a[0],a[1]);

	return EXIT_SUCCESS;
}
