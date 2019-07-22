/*
输入两个整数，相等显示A和B相等。
如果A大于B,显示 A大于B
否则显示 A 小于 B
*/
#include <stdio.h>

int main(void) {
    int A, B;

    printf("输入整数A: "); scanf("%d", &A);
    printf("输入整数B: "); scanf("%d", &B);

    if (A == B)
        puts("A和B相等。");
    else if (A > B)
        puts("A大于B。");
    else
        puts("A小于B");

    return 0;
}