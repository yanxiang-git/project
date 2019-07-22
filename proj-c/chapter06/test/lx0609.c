/*
创建一个函数，对元素个数为n的int型数组v，进行倒序排列
*/
#include <stdio.h>

void rev_intary(int v[], int n) {
    int tmp, i;

    for ( i = 0 ; i < n / 2 ; i++ ) {
        tmp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = tmp;
    }
}

int main(void) {
    int n, i;

    printf("输入数组元素的个数:  ");	scanf("%d", &n);

    int v[n];

    printf("输入数组各元素的值:  ");
    for (int i = 0; i < n  ; i++) {
        scanf("%d", &v[i]);
    }

    rev_intary(v, n);

    puts("输入数组各元素的值: ");
    for (i = 0; i < n; i++) {
        printf("%d\n", v[i] );
    }

    return 0;
}