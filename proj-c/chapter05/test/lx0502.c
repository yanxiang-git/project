/*
一次把5,4,3,2,1,赋值给数组的每一个元素并显示(使用for语句)
*/
#include <stdio.h>

int main(void) {
    int a[5];
    int i;

    for (i = 0; i < 5; i++)
        a[i] = 5 - i;
    for (i = 0; i < 5; i++)
        printf("a[%d]=%d\n", i , a[i]);

    return 0;
}