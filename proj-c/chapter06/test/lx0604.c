/*
使用6-3中的sqr函数创建一个函数，返回int型整数的四次幂
*/

#include <stdio.h>
//返回x的四次方
int pow4(int x) {
    return x * x * x * x;
}
//返回差
int diff(int a , int b) {
    return (a > b) ? (a - b) : (b - a);
}

int main(void) {
    int x, y;

    puts("输入两个整数: ");
    printf("整数1:  ");  	scanf("%d", &x);
    printf("整数2:  ");  	scanf("%d", &y);

    printf("输入两个整数的平方差:%d\n", diff(pow4(x), pow4(y)) );

    return 0;
}