/*
显示所输入的整数除以3的余数
*/
#include <stdio.h>

int main(void) {
    int a;

    puts("输入整数: ");
    scanf("%d", &a);

    if (a % 3 == 0)
        puts("余数为0");
    else if (a % 3 == 1)
        puts("余数为1");
    else
        puts("余数为2");

    return 0;
}