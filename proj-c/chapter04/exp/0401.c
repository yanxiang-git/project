 /*
 输入的整数是奇数还是偶数呢（按照自己的意愿进行循环操作）
*/                     
#include <stdio.h>

int main(void)
{
	int retry;

	do {
		int no;

		printf("输入整数: ");
		scanf("%d",&no);

		if (no % 2)
			puts("输入的整数是奇数。");
		else
			puts("输入的整数是偶数。");

		printf("要重复一次吗？【yes···0 / no ···9】 :");
		scanf("%d",&retry);
	} while (retry == 0);

	return 0;
}