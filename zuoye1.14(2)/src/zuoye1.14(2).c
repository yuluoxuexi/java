/*
 ============================================================================
 Name        : 14(2).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mainD() {
//	��ҵ1
//	�Ӽ�������10���������������������100ʱ������break��
//	���1������10�����ֶ�����100��ô����ҲҪ����
//	���2������10�����ֵ��м�����100��ô����ֱ��break
//	int x,y=1;//x=����,y=����
//	for(;y<=10;y++){
//		printf("�������%d��������",y);
//		fflush(stdout);
//		scanf("%d",&x);
//		fflush(stdin);
//		if (x==100){
//			break;
//		}
//	}

//	��ҵ2 ��ӡ1-100֮�䲻�ܱ����������� % continue
//	int x = 1;
//	for (; x <= 100,x % 9 == 0; x++) {
//		if () {
//			continue;
//		}else{
//			printf("%d\n",x);
//		}
//	}

//	��ҵ3
//	���0-100֮��С��70����������������β��Ϊ7������7�ı���
//	Ҫ��ѭ��Ҫд0-100
//	Ҫ�󣺲���ӡβ����7��7������
//	int x = 1;
//	for (; x <= 100; x+2) {
//		if ( x % 7 == 0 || x % 10 == 7 || x >= 70) {
//			continue;
//		} else {
//			printf("%d\n", x);
//		}
//	}

//	��ҵ4 ��������������Ϊ�����գ��ж������Ƿ��ǺϷ������ڣ������ڲ��Ϸ����˳�����exit(0)��
//	��Ҫ������100-9999֮�䣬����1-12֮�䣬��1-31����ʱ���жϣ�
//	int x = 0, y = 0, z = 0; //x=�꣬y=�£�z=��
//	for (;;) {
//		printf("�����������������գ������õ����\n");
//		fflush(stdout);
//		scanf("%d.%d.%d", &x, &y, &z);
//		fflush(stdin);
//		if ((x >= 100 && x <= 9999) && (y >= 1 && y <= 12)
//				&& (z >= 1 && z <= 31)) {
//			printf("���ںϷ�");
//		} else {
//			exit(0);
//		}
//		printf("\n");
//	}

//	return EXIT_SUCCESS;
}