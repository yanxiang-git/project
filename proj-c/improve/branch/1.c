//输入三个正整数，将这三个数从小到大输出。
#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("输入正整数a: \n");	scanf("%d",&a);
	printf("输入正整数b: \n");	scanf("%d",&b);
	printf("输入正整数c: \n");	scanf("%d",&c);

	int min = a;
	int max = c;
	if(b < min) min = b;
	if(b > max) max = b;

	printf("从小到大的为:%d，%d，%d。\n",min,a + b + c - min - max ,max );


	return 0;
}