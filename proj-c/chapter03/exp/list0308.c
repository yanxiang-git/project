/*
个位数是5吗
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入一个整数: ");
    scanf("%d", &no);

    if (no % 10 == 5)
        puts("个位数是5。");
    else
        puts("个位数不是5.");

    return 0;
}