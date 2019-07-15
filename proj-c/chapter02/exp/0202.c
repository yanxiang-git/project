/*
xianshi读取的整数最后一位数字
*/
#include <stdio.h>

int main(void)
{
 	int n1;

 	puts("输入整数: ");
 	scanf("%d",&n1);

 	printf("整数的最后一位数是%d。\n",n1 % 10 );

	return 0;
}