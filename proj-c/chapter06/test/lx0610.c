//创建一个函数，对元素个数为n的int型整数v2进行倒序排列，并将其结果保存在数组v1中。
#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    int i;

    for (i = 0; i < n - 1; i++)
        v1[i] = v2[n - i - 1];
}

int main(void) {
    int n, i;

    printf("输入数组v2[]元素的个数: "); scanf("%d", &n);

    int v2[n];
    int v1[n];

    printf("输入数组v2[]的元素: ");

    for (i = 0; i < n; i++) {
        scanf("%d\n", &v2[i] );
    }

    intary_rcpy(v1, v2, n); {
        for (i = 0; i < n; i++)
            printf("输出数组v1的元素:%d\n", v1[i] );
    }

    return 0;
}