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
//	��ҵ1
//	int x, y, z; //x=���� y=���� z=�ո���
//	int a = 0; //zong
//	printf("���������������");
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

//  ��ҵ2
//	Ҫ��ͣ�Ĵӿ���̨�����ַ���ֱ������Y������Ҫ����������м������ո��м�������ĸ�м����������ַ��м�����
//	char z='a';//������ַ�
//	int k=0,s=0,dx=0,xx=0,q=0;//k=�ո� s=���� dx=��д��ĸ xx=Сд��ĸ q=����
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
//	printf("������%d�����ո���%d������д��ĸ��%d����Сд��ĸ��%d���������ַ���%d��",s,k,dx,xx,q);

//	��ҵ3 ����һ�����֣��������ظ��Ĵ�������������Ҫ����while
//	�������֣�2
//	�ظ��Ĵ���4
//	����=2+22+222+2222

	int x,y,z=1,sum=0;;
	printf("��������\n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	printf("�����ظ��Ĵ���\n");
	fflush(stdout);
	scanf("%d",&y);
	fflush(stdin);
	while(z<=y){
		sum=sum+x;
		printf("%d\n",sum);
		z++;
		x=x*10+x%10;
	}
	printf("���ս��%d",sum);

	return EXIT_SUCCESS;
}
