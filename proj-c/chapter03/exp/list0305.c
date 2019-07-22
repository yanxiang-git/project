/*
输入的整数是否为0
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入一个整数: ");
    scanf("%d", &no);

    if (no == 0)
        puts("输入的整数是为0。");
    else
        puts("输入的整数不是为0。");
    return 0;
}