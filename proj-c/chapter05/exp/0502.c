/*
一次把 1，2，3，4，5赋值给数组的每一个元素并显示(不使用for语句)
*/
#include <stdio.h>

int main(void) {
    int a[5];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;

    printf("a[0] = %d。\n", a[0] );
    printf("a[1] = %d。\n", a[1] );
    printf("a[2] = %d。\n", a[2] );
    printf("a[3] = %d。\n", a[3] );
    printf("a[4] = %d。\n", a[4] );

    return 0;
}