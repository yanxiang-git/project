/*
输入的整数值是奇数还是偶数
*/
#include <stdio.h>

int main(void)

{
	int no;

	printf("输入一个整数：");
	scanf("%d",&no);

	if(no % 2)
		puts("输入的整数值是奇数。");
	else
		puts("输入的整数值是偶数。");

	return 0;
}