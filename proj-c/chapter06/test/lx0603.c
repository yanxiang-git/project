/*
创建一个函数，返回int型整数的立方
*/
#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) {
    int a;

    printf("输入整数: "); scanf("%d", &a);

    printf("该整数的立方为:%d\n", cube(a));

    return 0;
}