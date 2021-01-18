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
//	作业1
//	从键盘输入10个整数，当输入的整数是100时，跳出break。
//	情况1：输入10个数字都不是100那么程序也要结束
//	情况2：输入10个数字的中间遇到100那么程序直接break
//	int x,y=1;//x=数字,y=次数
//	for(;y<=10;y++){
//		printf("请输入第%d个正整数",y);
//		fflush(stdout);
//		scanf("%d",&x);
//		fflush(stdin);
//		if (x==100){
//			break;
//		}
//	}

//	作业2 打印1-100之间不能被９整除的数 % continue
//	int x = 1;
//	for (; x <= 100,x % 9 == 0; x++) {
//		if () {
//			continue;
//		}else{
//			printf("%d\n",x);
//		}
//	}

//	作业3
//	输出0-100之间小于70的奇数，并且跳过尾数为7的数和7的倍数
//	要求：循环要写0-100
//	要求：不打印尾数是7和7个倍数
//	int x = 1;
//	for (; x <= 100; x+2) {
//		if ( x % 7 == 0 || x % 10 == 7 || x >= 70) {
//			continue;
//		} else {
//			printf("%d\n", x);
//		}
//	}

//	作业4 输入三个整数作为年月日，判断日期是否是合法的日期，若日期不合法就退出程序exit(0)。
//	（要求年在100-9999之间，月在1-12之间，日1-31期暂时不判断）
//	int x = 0, y = 0, z = 0; //x=年，y=月，z=日
//	for (;;) {
//		printf("输入三个整数年月日，并且用点隔开\n");
//		fflush(stdout);
//		scanf("%d.%d.%d", &x, &y, &z);
//		fflush(stdin);
//		if ((x >= 100 && x <= 9999) && (y >= 1 && y <= 12)
//				&& (z >= 1 && z <= 31)) {
//			printf("日期合法");
//		} else {
//			exit(0);
//		}
//		printf("\n");
//	}

//	return EXIT_SUCCESS;
}
