/*
显示读出的实数值
*/
#include <stdio.h>

int main(void) {
    double a;

    puts("输入一个实数: ");
    printf("你输入的实数a: "); scanf("%lf", &a);

    printf("你输入的实数是:%f。\n", a);

    return 0;
}