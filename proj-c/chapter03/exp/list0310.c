/*
如果输入的整数是正数，怎么判断奇偶并显示
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入整数: ");
    scanf("%d", &no);

    if (no > 0)
        if (no % 2 == 0)
            puts("输入的是偶数。");
        else
            puts("输入的是奇数。");
    else
        puts("输入的不是正数。");

    return 0;
}