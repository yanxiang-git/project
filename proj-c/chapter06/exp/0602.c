/*
求三个整数中的最大值
*/
#include <stdio.h>

int max3 (int a,int b,int c){
	int max = a;

	if(b > max) max = b;
	if(c > max) max = c;

	return max;
}

int main(void)
{
	int n1,n2,n3;

	puts("输入三个整数: ");
	printf("整数1: "); scanf("%d",&n1);
	printf("整数2: "); scanf("%d",&n2);
	printf("整数3: "); scanf("%d",&n3);

	printf("三个整数里面最大的整数是:%d\n",max3(n1,n2,n3));

	return 0;
}