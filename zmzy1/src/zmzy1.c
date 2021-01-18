/*
 ============================================================================
 Name        : zmzy1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	作业1
//	int x, y, z; //x=行数 y=星数 z=空格数
//	int a = 0; //zong
//	printf("请输入金字塔行数");
//	fflush(stdout);
//	scanf("%d", &a);
//	fflush(stdin);
//	for (x = 1; x <= a; x++) {
//		for (z = 1; z < x; z++) {
//			printf(" ");
//		}
//		for (y = 1; y <= 2 * a - 2 * x + 1; y++) {
//			printf("*");
//		}
//		printf("\n");
//	}

//  作业2
//	要求不停的从控制台输入字符，直到输入Y结束，要求计算数字有几个，空格有几个，字母有几个，其他字符有几个？
//	char z='a';//输入的字符
//	int k=0,s=0,dx=0,xx=0,q=0;//k=空格 s=数字 dx=大写字母 xx=小写字母 q=其他
//	while(1){
//		scanf("%c",&z);
//		fflush(stdin);
//		if(z<=127&&z>=0){
//		if(z=='Y'){
//			break;
//		}
//		if(z==32){
//			k++;
//		}
//		if(((z<48)&&(z!=32))||z==94||z==95||z==110||z==111||z>122||((z>57)&&(z<65))){
//			q++;
//		}
//		if(z>47&&z<58){
//			s++;
//		}
//		if(z>64&&z<90){
//			dx++;
//		}
//		if(z>96&&z<123){
//			xx++;
//		}
//		} else {
//			q++;
//		}
//}
//	printf("数字有%d个，空格有%d个，大写字母有%d个，小写字母有%d个，其他字符有%d个",s,k,dx,xx,q);

//	作业3 输入一个数字，在输入重复的次数，计算结果，要求用while
//	输入数字：2
//	重复的次数4
//	计算=2+22+222+2222

	int x,y,z=1,sum=0;;
	printf("输入数字\n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	printf("输入重复的次数\n");
	fflush(stdout);
	scanf("%d",&y);
	fflush(stdin);
	while(z<=y){
		sum=sum+x;
		printf("%d\n",sum);
		z++;
		x=x*10+x%10;
	}
	printf("最终结果%d",sum);

	return EXIT_SUCCESS;
}
