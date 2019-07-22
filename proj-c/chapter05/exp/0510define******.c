/*
输入5名学生的分数并显示他们的总分和平均分数 （用宏定义人数）
*/
#include <stdio.h>
#define NUMBER 8        //学生人数

int main(void) {
    int a[NUMBER];
    int sum = 0;
    int i;

    printf("输入%d名学生的分数。\n", NUMBER);

    for (i = 0; i < NUMBER ; i++) {
        printf("%2d号同学: ", i + 1); scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("和为%5d\n", sum );
    printf("平均值:%.3f\n", (double) sum / NUMBER );

    return 0;
}