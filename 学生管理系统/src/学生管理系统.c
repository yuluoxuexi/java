/*
 ============================================================================
 Name        : ѧ������ϵͳ.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct sutdent {
	int xuehao; //ѧ��
	char name[30]; //ѧ������
	char sex[5]; //�Ա�  �� Ů
	int socer; //�ɼ�
} student[100];
int x = 0;
void shurushuju() { //��������
	FILE* fp = fopen("ѧ������ϵͳ.txt", "a");
	printf("�����%d��ѧ��ѧ��\n", x + 1);
	fflush(stdout);
	scanf("%d", &student[x].xuehao);
	fflush(stdin);
	printf("����%d��ѧ������\n", x + 1);
	fflush(stdout);
	scanf("%s", student[x].name);
	fflush(stdin);
	printf("����%d��ѧ���Ա�\n", x + 1);
	fflush(stdout);
	scanf("%s", student[x].sex);
	fflush(stdin);
	printf("����%d��ѧ���ɼ�\n", x + 1);
	fflush(stdout);
	scanf("%d", &student[x].socer);
	fflush(stdin);
	fwrite(&student[x], sizeof(student), 1, fp);
	printf("����ɹ�,������һ������\n");
	x++;
	fclose(fp);
}
void shuchushuju() { //��ȡ����
	FILE* fp = fopen("ѧ������ϵͳ.txt", "r");
	if (fp != NULL) {
		if (x == 0) {
			printf("������������巵����һ������1��������\n");
		}
		for (int i = 0; i < x; i++) {
			fread(&student[i], sizeof(student), 1, fp);
			printf("ѧ��ѧ��%d��ѧ������%s��ѧ���Ա�%s��ѧ���ɼ�%d\n", student[i].xuehao,
				student[i].name, student[i].sex, student[i].socer);
		}
		fclose(fp);
	}
	else {
		printf("�Ҳ����ļ�");
	}
}
void xiugaishuju() {

}
void shanchushuju() {
	x = 0;
	remove("ѧ������ϵͳ.txt");
	printf("ɾ���ɹ�,������һ������\n");
}
void main() {
	remove("ѧ������ϵͳ.txt");
	int i;
	while (1) {
		printf("���������ֽ��в�����1 ��������  2 �������  3�޸�����  4ɾ������  5��������  6�˳�\n");
		fflush(stdout);
		scanf("%d", &i);
		fflush(stdin);
		if (i == 1) {
			shurushuju();
		}
		if (i == 2) {
			shuchushuju();
		}
		if (i == 3) {
			xiugaishuju();
		}
		if (i == 4) {
			shanchushuju();
		}
		if (i == 6) {
			exit(0);
		}
	}
}
