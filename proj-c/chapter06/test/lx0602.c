/*
创建一个函数，返回三个int型整数类型中的最小值
*/
#include <stdio.h>
int min3(int a, int b, int c) {
    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    return min;
}

int main(void) {
    int n1, n2, n3;

    puts("输入三个整数。");
    printf("整数1: ");  scanf("%d", &n1);
    printf("整数2: ");  scanf("%d", &n2);
    printf("整数3: ");  scanf("%d", &n3);

    printf("三个整数里面的最小值是:%d。\n", min3(n1, n2, n3));

    return 0;
}