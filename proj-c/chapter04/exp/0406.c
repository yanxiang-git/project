/*
输入一个整数，从左向右显示出小于输入值的所有正偶数
*/
#include <stdio.h>

int main(void) {
    int a;
    int i;

    i = 0;

    printf("输入一个整数: "); scanf("%d", &a);

    while (i <= a) {
        printf("%d ", i);

        i = i + 2;
    }

    printf("\n");

    return 0;
}