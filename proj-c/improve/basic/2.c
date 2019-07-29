//通过键盘输入两个实数，计算并显示和、差、积、商、平均数（小数点后保留两位）。
#include <stdio.h>

int main(void)
{
	int a,b;

	printf("输入两个整数: ");
	scanf("%d%d",&a,&b);

	printf("和为:%d。\n",a + b);
	printf("差为:%d。\n",a - b);
	printf("商为:%d。\n",a % b);
	printf("积为:%d。\n",a * b);
	printf("平均数为:%.2f。\n",(double)(a+b) / 2);

	return 0;
}