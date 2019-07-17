/*
将数组的全部元素 赋值为 0.0 并显示
*/
#include <stdio.h>

int main(void)
{	
	int i;
	double a[6];

	for(i = 0;i < 6;i++)
		a[i] = 0.0;
	for(i = 0;i < 6;i++)
		printf("a[%d]=%.1f\n",i , a[i]);
	return 0;
}