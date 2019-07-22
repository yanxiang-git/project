/*
线性查找
*/
#include <stdio.h>

#define NUMBER   5
#define FALLED  -1
//查找元素为n的数组v中 与key 的值相等的元素
int search(const int v[], int key, int n) {
    int i = 0;

    while (1) {
        if (i == n)
            return FALLED;
        if (v[i] == key)
            return i;
        i++;
    }
}

int main(void) {
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("v[%d]: ", i );
        scanf("%d", &vx[i]);
    }

    printf("要查找的值: ");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FALLED)
        puts("查找失败。");
    else
        printf("%d是数组的第%d号元素\n", ky, idx + 1 );

    return 0;
}