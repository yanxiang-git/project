/*
画一个长方形 显示横向较长的正方形
*/
#include <stdio.h>

int main(void) {
    int i, j, min, max;
    int height, width;

    puts("让我们来画一个长方形");

    printf("一边: "); scanf("%d", &height);
    printf("另一边: "); scanf("%d", &width);

    min = (height < width) ? height : width;
    max = (height > width) ? height : width;

    for (i = 1; i <= min ; i++) {
        for (j = 1; j <= max; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}