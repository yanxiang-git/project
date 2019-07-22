/*
总结
*/
#include <stdio.h>
int main(void) {
    int a, b;
    double r;

    printf("整数a和b的值: ");
    scanf("%d%d", &a, &b);

    printf("a + b =%d\n", a + b);
    printf("a - b =%d\n", a - b);
    printf("a * b =%d\n", a * b);
    printf("a / b =%d\n", a / b);

    printf("(a + b) / 2 =%d。\n", (a + b) / 2);
    printf("平均值 = %f。\n\n", (double)(a + b) / 2);

    puts("输入半径: ");
    scanf("%lf", &r);

    printf("半径为%.5f。\n的圆的面积为%.5f。\n", r, 3.14 * r * r );

    return 0;
}