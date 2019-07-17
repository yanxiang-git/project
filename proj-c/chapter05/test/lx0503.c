/*
从头开始 依次使用5， 4，3，2，1 对数组个元素进行初始化并显示
*/

#include <stdio.h>

int main(void)
{	
	int a[5] = { 5 , 4 , 3 , 2 , 1 };
	int i;

	for(i = 0; i < 5;i++)
		printf("a[%d] = %d\n",i,a[i]);



	return 0;
}