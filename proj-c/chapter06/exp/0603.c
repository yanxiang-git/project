/*
计算两个整数的平方差
*/
#include <stdio.h>
//返回x的平方
int sqr(int x) {
    return x * x;
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

    printf("输入两个整数的平方差:%d\n", diff(sqr(x), sqr(y)) );

    return 0;
}