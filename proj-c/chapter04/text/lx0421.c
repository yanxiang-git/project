/*
输入整数为边长的正方形
*/
#include <stdio.h>

int main(void) {
    int no;
    int i, j;

    puts("生成一个正方形。");
    printf("正方形有几层: ");		scanf("%d", &no);

    for (i = 1; i <= no ; i++) {
        for (j = 1; j <= no; j++)
            putchar('*');
        putchar('\n');

    }
    return 0;
}