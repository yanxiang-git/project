/*
输入5名学生的分数并显示他们的最大值和最小值 （用宏定义人数）
*/
#include <stdio.h>
#define NUMBER 8        //学生人数

int main(void) {
    int a[NUMBER];
    int sum = 0;
    int i;
    int max, min;

    printf("输入%d名学生的分数。\n", NUMBER);

    for (i = 0; i < NUMBER ; i++) {
        printf("%2d号同学: ", i + 1); scanf("%d", &a[i]);
        sum += a[i];
    }

    max = min = a[0];

    for (i = 0; i < NUMBER ; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("最大分为%5d\n", max );
    printf("最小分为%5d\n", min );

    return 0;
}