/*
输入的两个整数相等吗
*/
#include <stdio.h>

int main(void)
{
	int a,b;

	printf("输入整数a: "); scanf("%d",&a);
	printf("输入整数b: "); scanf("%d",&b);
	
	if(a==b)
		puts("输入的两个整数相等");
	else
		puts("输入的两个整数不相等");


	return 0;

}