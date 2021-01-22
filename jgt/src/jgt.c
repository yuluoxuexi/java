/*
 ============================================================================
 Name        : jgt.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Student{
	int num;
	char name[20];
	char sex;
	float socre;
}s1,s2,s3;

int main(void) {
	struct Student s1={19,"dd",'M',66};
	struct Student s2={20,"aa",'F',60};
	struct Student s3={18,"cc",'M'};
	printf("请输入第三个学生的成绩");
	fflush(stdout);
	scanf("%f",&s3.socre);
	fflush(stdin);
	if (s1.socre<60){
		printf("学号%d,名字%s,成绩%.2f,性别%c",s1.num,s1.name,s1.socre,s1.sex);
	}
	if (s2.socre<60){
		printf("学号%d,名字%s,成绩%.2f,性别%c",s2.num,s2.name,s2.socre,s2.sex);
	}
	if (s3.socre<60){
		printf("学号%d,名字%s,成绩%.2f,性别%c",s3.num,s3.name,s3.socre,s3.sex);
	}

	return EXIT_SUCCESS;
}
