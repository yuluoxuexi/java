/*
 ============================================================================
 Name        : 19(1).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int a[10],b;
//	float pj=0,sum=0;
//	for(b=0;b<10;b++){
//		printf("�������%d������\n",b+1);
//		fflush(stdout);
//		scanf("%d",&a[b]);
//		fflush(stdin);
//		sum+=a[b];
//	}
//	printf("�ܺ�Ϊ%.2f\n",sum);
//	pj=sum/10;
//	printf("ƽ��ֵΪ%.2f\n",pj);
//	int max=a[0],min=a[0];
//	for(b=0;b<10;b++){
//		if(max<a[b]){
//			max=a[b];
//		}else if (min>a[b]){
//				min=a[b];
//			}
//		}
//	printf("��СֵΪ%d,���ֵΪ%d,ƽ��ֵ%.2f,�ܺ�%.2f",min,max,pj,sum);

//	int a[5],b,c,d=0;
//	for(b=0;b<5;b++){
//		printf("�������%d������",b+1);
//		fflush(stdout);
//		scanf("%d",&a[b]);
//		fflush(stdin);
//	}
//	printf("���������ֲ�ѯ");
//	fflush(stdout);
//	scanf("%d",&c);
//	fflush(stdin);
//	for(b=0;b<5;b++){
//	if(c==a[b]){
//		printf("%d",b+1);
//		d=1;
//	}
//	if(d==0){
//		printf("�Ҳ���");
//		break;
//	}
//	}

	int x,y,z,n=6;
	int a[n]={1,7,6,8,11,2};
	for(x=0;x<6;x++){
	printf("��������������");
	fflush(stdout);
	scanf("%d",&a[n]);
	fflush(stdin);
	}
	for(x=0;x<6-1;x++){
		for(y=0;y<(6-1-x);y++){
			if(a[y]>a[y+1]){
				z=a[y];
				a[y]=a[y+1];
				a[y+1]=z;
			}
		}
		printf("%d\n",a[x]);
	}




	return EXIT_SUCCESS;
}