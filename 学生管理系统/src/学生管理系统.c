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
struct student {
    int xuehao; //ѧ��
    char name[30]; //ѧ������
    char sex[5]; //�Ա�  �� Ů
    int socer; //�ɼ�
};
void shurushuju() { //��������
    FILE* fp = fopen("ѧ������ϵͳ.txt", "a");
    int x = fileLength(fp) / sizeof(struct student);//�ļ���С�½ṹ���С=�ṹ������
    struct student stu;
    printf("�����%d��ѧ��ѧ��\n", x + 1);
    fflush(stdout);
    scanf("%d", &stu.xuehao);
    fflush(stdin);
    printf("����%d��ѧ������\n", x + 1);
    fflush(stdout);
    scanf("%s", stu.name);
    fflush(stdin);
    printf("����%d��ѧ���Ա�\n", x + 1);
    fflush(stdout);
    scanf("%s", stu.sex);
    fflush(stdin);
    printf("����%d��ѧ���ɼ�\n", x + 1);
    fflush(stdout);
    scanf("%d", &stu.socer);
    fflush(stdin);
    fwrite(&stu, sizeof(struct student), 1, fp);
    printf("����ɹ�,������һ������\n");
    fclose(fp);
}
// ��ȡ�ļ�����
int fileLength(FILE* file) {
    int pos = ftell(file);
    fseek(file, 0, SEEK_END);//��λ���ļ��������
    int length = ftell(file);//ftell��ø��ļ�ָʾ����ʱ��ƫ����,��ʱ�Ѿ������ļ�ĩβ,���ܻ���ļ��Ĵ�С
    fseek(file, pos, SEEK_SET);//��λ���ļ�ԭ����λ��
    return length;
}
void shuchushuju() { //��ȡ����
    FILE* fp = fopen("ѧ������ϵͳ.txt", "r");
    int x = fileLength(fp) / sizeof(struct student);//�ļ���С�½ṹ���С=�ṹ������
    if (fp != NULL) {
        if (x == 0) {
            printf("������������巵����һ������1��������\n");
        }
        struct student stu;
        int i;
        for (i = 0; i < x; i++) {
            fread(&stu, sizeof(struct student), 1, fp);
            printf("ѧ��ѧ��%d��ѧ������%s��ѧ���Ա�%s��ѧ���ɼ�%d\n", stu.xuehao,
                stu.name, stu.sex, stu.socer);
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
    remove("ѧ������ϵͳ.txt");
    printf("ɾ���ɹ�,������һ������\n");
}
void main() {
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
