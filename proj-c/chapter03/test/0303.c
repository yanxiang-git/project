/*
输入一个整数值，显示其绝对值
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入整数: ");
    scanf("%d", &no);

    if ( no >= 0)
        printf("绝对值是:%d。\n", no);
    else
        printf("绝对值是:%d。\n", -no);

    return 0;
}