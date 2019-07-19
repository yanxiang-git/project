/*
创建一个函数，连续发出n次响铃
*/
#include <stdio.h>

//创建一个函数，连续发出n次响铃

void alert (int n)
{
	while(n-- > 0)
		putchar ('\a');
}

int main(void)
{
	int a;

	puts("输入一个整数: ");
	scanf("%d",&a);

	alert(a);
	

	return 0;
}