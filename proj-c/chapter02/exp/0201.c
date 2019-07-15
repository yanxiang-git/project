/*
读取两个整数，显示它们的— + * % /
*/
#include <stdio.h>

int main(void)
{
	int a,b;

	puts("输入两个整数: ");
	printf("整数a: "); scanf("%d",&a);
	printf("整数b: "); scanf("%d",&b);

	printf("a + b =%d。\n",a + b );
	printf("a - b =%d。\n",a - b );
	printf("a * b =%d。\n",a * b );
	printf("a / b =%d。\n",a / b );
	printf("a %%b =%d。\n",a % b );

	return 0;
}