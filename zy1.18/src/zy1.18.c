/*
 ============================================================================
 Name        : 18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	��ҵ1 ���1-100֮�������������3�ı����������λ��7��ô�������*2��������������־���ֱ�����
//	int x,y;
//	for(x=1;x<100;x++){
//		if (x%3==0||x%2==0){
//			continue;
//		}
//		if(x%10==7){
//			y=x*2;
//			printf("%d\n",y);
//			continue;
//		}
//		printf("%d\n",x);
//	}
//
//	��ҵ2���ӳ��ܲ��Ĺ��£�һ����ܲ�����һ��̫���˳���һ���ֶ�һ�����ڶ���Ե���һ���ֶ�һ����
//	ÿ��Ե�����ǰһ��ʣ�µ�һ���ڶ�һ�������˵�10��������Ե�ʱ���ܲ�ֻʣ��1����������ܲ�һ�����ٸ���
//	��10�죺�ܲ���1
//	��9�죺�ܲ��� 4
//	��8�죺�ܲ��� 10
//	��7���ܲ��� 22
//	.........
//	��1���ܲ��� ��

//	int x=1,y=10,z=1,a=1;//x=�ܲ� y=����  z=�ܺ�
//	printf("��%d��:�ܲ�%d��\n",y,z);
//	for(;a<10;a++){
//		z=(z+x)*2;
//		y--;
//		printf("��%d��:�ܲ�%d��\n",y,z);
//		}

//	��ҵ3    ����������ϵͳ
//	��ʼֵ���壺�˺�int name=123, ����int pwd=456,���int money=1000;
//	�������˺����룬Ҫ��ͣ������ֱ������ɹ�Ϊֹwhile(1)���ɹ�֮�����ϵͳ
//	�����ӡ��1ȡ��   2��ѯ���   3���   4�˳�
//	ע�⣺ϵͳ�Ĺ�������Զû�н������ǵ��4�˳���while(1)
//	1ȡ�
//	����Ľ��С�������ٽ����ʾȡ��ɹ���ӡ�����ҷ��ز˵�
//	����Ľ���������ʾ���㣬�����ܽ���У����������û�����ȡ��Ľ��ֱ���ɹ�Ϊֹwhile(1)
//	2 ��ʾ���
//	3.��
//	���������0�����ɹ�����ʾ�����ҷ��ز˵�
//	�������С��0�����ʧ�ܣ��������û���������ֱ���ɹ�Ϊֹwhile(1)
//	4.�˳�����

	int name = 123, pwd = 456, money = 1000;
	int x, y; //x=�˺� y=����
	while (1) {
		printf("�������˺�\n");
		fflush(stdout);
		scanf("%d", &x);
		fflush(stdin);
		printf("����������\n");
		fflush(stdout);
		scanf("%d", &y);
		fflush(stdin);
		if (x != name || y != pwd) {
			printf("�˺Ż����������������������\n");
		}
//		if (y != pwd) {
//			printf("�˺Ż����������������������\n");
//		}
		if (x == name && y == pwd) {
			break;
		}
	}
	int a = 0; //ѡ������
	int qk; //ȡ��
	int ck; //���
	while (1) {
		printf("1ȡ��   2��ѯ���   3���   4�˳�\n");
		fflush(stdout);
		scanf("%d", &a);
		fflush(stdin);
		if (a == 1) {
			printf("������ȡ����\n");
			fflush(stdout);
			scanf("%d", &qk);
			fflush(stdin);
			if (qk <= money && qk > 0) {
				money = money - qk;
				printf("���Ϊ%dԪ\n", money);
			} else {
				printf("ȡ��ʧ��\n");
			}
		}
		if (a == 2) {
			printf("���Ϊ%dԪ\n", money);
		}
		if (a == 3) {
			printf("����������\n");
			fflush(stdout);
			scanf("%d", &ck);
			fflush(stdin);
			if (ck > 0) {
				money = money + ck;
				printf("���ɹ������Ϊ%dԪ\n", money);
			} else {
				printf("������");
			}
		}
		if (a == 4) {
			printf("���˿�");
			exit(0);
		}
	}

	return EXIT_SUCCESS;
}
