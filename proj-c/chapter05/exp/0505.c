/*
从头开始 一次用1，2，3，4，5 对数组个元素进行初始化并显示
*/

#include <stdio.h>

int main(void)
{	
	int a[5] = { 1 , 2 , 3 , 4 , 5 };
	int i;

	for(i = 0; i < 5;i++)
		printf("a[%d] = %d\n",i,a[i]);



	return 0;
}