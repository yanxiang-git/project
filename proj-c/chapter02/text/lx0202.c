/*
读取两个整数，输出和 乘积
*/
#include <stdio.h>

int main(void)
{
	int a,b,c,d;

	puts("输入两个整数。");
	printf("整数a: ");  scanf("%d",&a);
	printf("整数b: ");  scanf("%d",&b);

    c = a + b, d = a * b;

    printf("它们的和是%d。\n",c );
    printf("它们的乘积是%d。\n",d );


	return 0;
}