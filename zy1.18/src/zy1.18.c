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
//	作业1 输出1-100之间的奇数，跳过3的倍数，如果个位是7那么把这个数*2在输出。其他数字就是直接输出
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
//	作业2兔子吃萝卜的故事，一筐的萝卜，第一天太饿了吃了一半又多一个，第二天吃掉了一半又多一个。
//	每天吃掉的是前一天剩下的一半在多一个。到了第10天早上想吃的时候萝卜只剩下1个，求这框萝卜一共多少个。
//	第10天：萝卜：1
//	第9天：萝卜： 4
//	第8天：萝卜： 10
//	第7：萝卜： 22
//	.........
//	第1：萝卜： ？

//	int x=1,y=10,z=1,a=1;//x=萝卜 y=天数  z=总和
//	printf("第%d天:萝卜%d个\n",y,z);
//	for(;a<10;a++){
//		z=(z+x)*2;
//		y--;
//		printf("第%d天:萝卜%d个\n",y,z);
//		}

//	作业3    完整的银行系统
//	初始值定义：账号int name=123, 密码int pwd=456,金额int money=1000;
//	请输入账号密码，要求不停的输入直到输入成功为止while(1)。成功之后进入系统
//	界面打印：1取款   2查询余额   3存款   4退出
//	注意：系统的功能是永远没有结束除非点击4退出，while(1)
//	1取款：
//	输入的金额小于余额，减少金额显示取款成功打印余额，并且返回菜单
//	输入的金额大于余额，显示余额不足，您的总金额有？，重新让用户输入取款的金额直到成功为止while(1)
//	2 显示余额
//	3.存款：
//	输入金额大于0，存款成功，显示余额，并且返回菜单
//	输出入金额小于0，存款失败，重新让用户输入存款金额直到成功为止while(1)
//	4.退出程序

	int name = 123, pwd = 456, money = 1000;
	int x, y; //x=账号 y=密码
	while (1) {
		printf("请输入账号\n");
		fflush(stdout);
		scanf("%d", &x);
		fflush(stdin);
		printf("请输入密码\n");
		fflush(stdout);
		scanf("%d", &y);
		fflush(stdin);
		if (x != name || y != pwd) {
			printf("账号或密码输入错误，请重新输入\n");
		}
//		if (y != pwd) {
//			printf("账号或密码输入错误，请重新输入\n");
//		}
		if (x == name && y == pwd) {
			break;
		}
	}
	int a = 0; //选项数字
	int qk; //取款
	int ck; //存款
	while (1) {
		printf("1取款   2查询余额   3存款   4退出\n");
		fflush(stdout);
		scanf("%d", &a);
		fflush(stdin);
		if (a == 1) {
			printf("请输入取款数\n");
			fflush(stdout);
			scanf("%d", &qk);
			fflush(stdin);
			if (qk <= money && qk > 0) {
				money = money - qk;
				printf("余额为%d元\n", money);
			} else {
				printf("取款失败\n");
			}
		}
		if (a == 2) {
			printf("余额为%d元\n", money);
		}
		if (a == 3) {
			printf("请输入存款数\n");
			fflush(stdout);
			scanf("%d", &ck);
			fflush(stdin);
			if (ck > 0) {
				money = money + ck;
				printf("存款成功，余额为%d元\n", money);
			} else {
				printf("存款错误");
			}
		}
		if (a == 4) {
			printf("已退卡");
			exit(0);
		}
	}

	return EXIT_SUCCESS;
}
