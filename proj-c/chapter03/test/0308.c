/*
显示输入的两个整数的差并显示    if语句
*/
#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("输入两个整数: ");
    printf("整数1: "); scanf("%d", &n1);
    printf("整数2: "); scanf("%d", &n2);

    if (n1 > n2)
        printf("差是%d。\n", n1 - n2 );
    else
        printf("差是%d。\n", n2 - n1 );

    return 0;
}