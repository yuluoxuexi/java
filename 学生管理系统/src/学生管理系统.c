/*
 ============================================================================
 Name        : 学生管理系统.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student {
    int xuehao; //学号
    char name[30]; //学生姓名
    char sex[5]; //性别  男 女
    int socer; //成绩
};
void shurushuju() { //输入数据
    FILE* fp = fopen("学生管理系统.txt", "a");
    int x = fileLength(fp) / sizeof(struct student);//文件大小÷结构体大小=结构体数量
    struct student stu;
    printf("输入第%d个学生学号\n", x + 1);
    fflush(stdout);
    scanf("%d", &stu.xuehao);
    fflush(stdin);
    printf("输入%d个学生姓名\n", x + 1);
    fflush(stdout);
    scanf("%s", stu.name);
    fflush(stdin);
    printf("输入%d个学生性别\n", x + 1);
    fflush(stdout);
    scanf("%s", stu.sex);
    fflush(stdin);
    printf("输入%d个学生成绩\n", x + 1);
    fflush(stdout);
    scanf("%d", &stu.socer);
    fflush(stdin);
    fwrite(&stu, sizeof(struct student), 1, fp);
    printf("输入成功,返回上一步操作\n");
    fclose(fp);
}
// 获取文件长度
int fileLength(FILE* file) {
    int pos = ftell(file);
    fseek(file, 0, SEEK_END);//定位到文件的最后面
    int length = ftell(file);//ftell获得该文件指示符此时的偏移量,此时已经是在文件末尾,故能获得文件的大小
    fseek(file, pos, SEEK_SET);//定位到文件原来的位置
    return length;
}
void shuchushuju() { //读取数据
    FILE* fp = fopen("学生管理系统.txt", "r");
    int x = fileLength(fp) / sizeof(struct student);//文件大小÷结构体大小=结构体数量
    if (fp != NULL) {
        if (x == 0) {
            printf("无数据输出，清返回上一步输入1输入数据\n");
        }
        struct student stu;
        int i;
        for (i = 0; i < x; i++) {
            fread(&stu, sizeof(struct student), 1, fp);
            printf("学生学号%d，学生姓名%s，学生性别%s，学生成绩%d\n", stu.xuehao,
                stu.name, stu.sex, stu.socer);
        }
        fclose(fp);
    }
    else {
        printf("找不到文件");
    }
}
void xiugaishuju() {

}
void shanchushuju() {
    remove("学生管理系统.txt");
    printf("删除成功,返回上一步操作\n");
}
void main() {
    int i;
    while (1) {
        printf("请输入数字进行操作：1 输入数据  2 输出数据  3修改数据  4删除数据  5查找数据  6退出\n");
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
