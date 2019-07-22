/*
读取两个实数值，用实数显示它们的和差 乘积 商
*/
#include <stdio.h>

int main(void) {
    double a, b;

    puts("输入两个实数: ");
    printf("实数a: " ); scanf("%lf", &a);
    printf("实数b: " ); scanf("%lf", &b);

    printf("它们的和差积商是:\n%f,\n%f,\n%f,\n%f,\n", a + b, a - b, a * b, a / b);

    return 0;
}