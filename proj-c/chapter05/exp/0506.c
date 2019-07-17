/*
把数组的全部元素复制到另一个数组中
*/
#include <stdio.h>

int main(void)
{
	int i;
	int a[6] = {21 ,32 ,4 ,6 };
	int b[6];

	for(i = 0;i < 6;i++)
		b[i] = a[i];

	puts(" a  b ");
	puts("-------");

	for(i = 0;i < 6;i++)
		printf("%2d %2d\n",a[i],b[i] );

	return 0;
}