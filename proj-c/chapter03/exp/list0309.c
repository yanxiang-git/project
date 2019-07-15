/*
判断输入的整数的符号(正负)
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入整数: ");
    scanf("%d", &no);

    if (no == 0)
        puts("整数是0");
    else if (no > 0)
        puts("整数是正数");
    else
        puts("整数是负数");

    return 0;
}