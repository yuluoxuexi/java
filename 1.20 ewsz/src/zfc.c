/*
 * zfc.c
 *
 *  Created on: 2021��1��20��
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
//  ��ҵ1
//��ϰ��������5��ѧ�����������ַ�������Ҫ���ҳ�������С���Ǹ�ѧ��������ʲô��
//	int x,n;
//	char a[5][20]={"aaa","xxx","ccc","eee","ddd"};
//	for(x=0;x<4;x++){
//		n=strcmp(a[x],a[x+1]);
//		if(n>0){
//			strcpy(a[x+1],a[x]);
//		}
//	}
//	printf("%s",a[4]);
//	��ҵ2
//	��ϰ��������5���ַ���������ð������
//	char b[5][20] = { "ccc", "bbb", "www", "aaa", "eee" };
//	int x, y;
//	char a[20];
//	for (x = 0; x < 5; x++) {
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

//	��ҵ3
//	��ϰ���������û������ַ����������루�ַ����������бȽ��û����̶���admin,����̶���123
//	�ɹ����˳�
//	ʧ��Ҫ��ʾ���û������������1�Σ�����������
//	����������5�Σ�5�ι��󻹲���ȷ����ʾ�������п��Ѿ�����ס�����˳�
//	char a[6] = { "admin" };
//	char b[4] = { "123" };
//	char c[20];
//	char d[20];
//	int x;
//	for (x = 0; x < 5; x++) {
//		printf("�������û���\n");
//		fflush(stdout);
//		scanf("%s", c);
//		fflush(stdin);
//		printf("����������\n");
//		fflush(stdout);
//		scanf("%s", d);
//		fflush(stdin);
//		if (strcmp(a, c) == 0 && strcmp(b, d) == 0) {
//			printf("�˺�����������ȷ");
//			exit(0);
//		}  else {
//			printf("�û����������������%d�Σ�����������\n", x + 1);
//		}
//	}
//	printf("�������п��Ѿ�����ס");
}