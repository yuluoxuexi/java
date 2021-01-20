/*
 ============================================================================
 Name        : 18wszy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cd(int n);
int main(void) {
	int x=1,y;
	for(x=1;x<=5;x++){
		y=cd(x);
		printf("第%d个人吃了%d个蛋\n",x,y);
	}
	return EXIT_SUCCESS;
}
int cd(int n){
	if (n==1){
		return 5;
	} else {
		return cd(n-1)+3;
	}
}
