/*
创建一个函数，返回元素个数为n的int型整数组v中的最小值
*/

#include <stdio.h>

int min_of(const int v[], int n) {
    int min = v[0];

    while (n-- > 0) {
        if (v[n] < min)
            min = v[n];
    }
    return min;
}

int main(void) {
    int n, i;

    printf("输入数组的元素个数: "); scanf("%d", &n);

    int v[n];

    printf("输入数组的各元素的值。");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("函数中的最小值是:%d\n", min_of(v, n) );

    return 0;
}


