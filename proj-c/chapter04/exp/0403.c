/*
不停的输入整数，显示其和及平均值
*/
#include <stdio.h>
int main(void) {
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("输入一个整数: ");
        scanf("%d", &t);
        sum = sum + t;
        cnt = cnt + 1;

        printf("是否继续？<yes····0/no···9>:");
        scanf("%d", &retry);
    } while (retry == 0);

    printf("和为%d,平均值为%.2f。\n", sum, (double)sum / cnt );

    return 0;
}