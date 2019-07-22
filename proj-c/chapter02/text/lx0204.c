/*
编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。
*/
#include <stdio.h>
int main(void) {
    int        a , b ;
    double     c , d ;

    a = 2;
    b = 3;
    c = 0.2;
    d = 0.3;

    printf("a + b = %d\n", a + b);
    printf("a + c = %f\n", a + c);
    printf("c + d = %f\n", c + d);

    printf("a * b = %d\n", a * b);
    printf("a * c = %f\n", a * c);
    printf("c * d = %f\n", c * d);

    printf("a / b = %f\n", (double)a / b);
    printf("a / c = %f\n", a / c);
    printf("c / d = %f\n", c / d);

    return 0;
}