/*
输入两个整数值，xx是xx的约数，xx不是xx的约数
*/
#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("输入一个整数n1: "); scanf("%d", &n1);
    printf("输入一个整数n2: "); scanf("%d", &n2);

    if (n1 % n2 == 0)
        puts("n2是n1的约数");
    else
        puts("n2不是n1的约数");

    return 0;
}