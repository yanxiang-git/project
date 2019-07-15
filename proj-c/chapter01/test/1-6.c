/*
读取一个整数，并显示其减去6之后的结果
*/
#include<stdio.h>

int main(void)
{
	int no;

	printf("读取一个整数：");
	scanf("%d",&no);

	printf("读取一个整数显示其减去6之后的结果是%d。\n",no -6 );

	return 0;
}