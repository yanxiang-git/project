/*
输入三个整数，如果三个数都相等，则显示“三个值都相等”。
如果其中任意两个值相等，则显示“有两个值相等”。
如果上述两种情况都不满足，则显示“三个值各不相同”。
*/
#include<stdio.h>
int main(void)
{
	int A,B,C;

	printf("输入整数A: "); scanf("%d",&A);
	printf("输入整数B: "); scanf("%d",&B);
	printf("输入整数C: "); scanf("%d",&C);

	if (A == B == C)
		printf("三个值都相等。\n");
	else if (A ==B || A == C || B == C)
		printf("有两个值相等。\n");
	else
		printf("三个值都不相等。\n");

	return 0;
}