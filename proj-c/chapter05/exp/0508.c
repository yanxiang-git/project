/*
对数组的全部元素进行倒序排列
*/
#include <stdio.h>

int main(void) {
    int i;
    int a[5];

    for (i = 0; i < 5; i++) {
        printf("a[%d]: ", i); scanf("%d", &a[i]);
    }

    for (i = 0; i < 2; i++) {
        int temp = a[i];

        a[i]     = a[4 - i];
        a[4 - i] = temp;
    }

    puts("倒序排列");
    for (i = 0; i < 5; i++)
        printf("a[%d]=%d\n", i, a[i]);

    return 0;
}