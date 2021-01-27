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
struct sutdent {
	int xuehao; //学号
	char name[30]; //学生姓名
	char sex[5]; //性别  男 女
	int socer; //成绩
} student[100];
int x = 0;
void shurushuju() { //输入数据
	FILE *fp = fopen("学生管理系统.txt", "a");
	printf("输入第%d个学生学号\n", x + 1);
	fflush(stdout);
	scanf("%d", &student[x].xuehao);
	fflush(stdin);
	printf("输入%d个学生姓名\n", x + 1);
	fflush(stdout);
	scanf("%s", student[x].name);
	fflush(stdin);
	printf("输入%d个学生性别\n", x + 1);
	fflush(stdout);
	scanf("%s", student[x].sex);
	fflush(stdin);
	printf("输入%d个学生成绩\n", x + 1);
	fflush(stdout);
	scanf("%d", &student[x].socer);
	fflush(stdin);
	fwrite(&student[x], sizeof(student), 1, fp);
	printf("输入成功,返回上一步操作\n");
	x++;
	fclose(fp);
}
void shuchushuju() { //读取数据
	FILE *fp = fopen("学生管理系统.txt", "r");
	int b = 0; //打印学生数量
	if (fp != NULL) {
		if(x==0){
			printf("无数据输出，清返回上一步输入1输入数据\n");
		}
		for (b = 0; b < x;b++) {
			fread(&student[b], sizeof(student), 1, fp);
			printf("学生学号%d，学生姓名%s，学生性别%s，学生成绩%d\n", student[b].xuehao,
					student[b].name, student[b].sex, student[b].socer);
		}
		fclose(fp);
	} else {
		printf("找不到文件");
	}
}
void xiugaishuju(){

}
void shanchushuju(){
	FILE *fp=fopen("学生管理系统.txt", "w");
	x=0;
	fclose(fp);
	printf("删除成功,返回上一步操作\n");
}
void main() {
	int i;
	while(1){
		printf("请输入数字进行操作：1 输入数据  2 输出数据  3修改数据  4删除数据  5查找数据  6退出\n");
		fflush(stdout);
		scanf("%d",&i);
		fflush(stdin);
		if(i==1){
	shurushuju();
		}
		if(i==2){
			shuchushuju();
		}
		if(i==3){
			xiugaishuju();
		}
		if(i==4){
			shanchushuju();
		}
		if(i==6){
			exit(0);
		}
	}
}
