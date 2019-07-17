/*
输入5名学生的分数并显示他们的总分和平均分数
*/
#include <stdio.h>

int main(void) {
    int a[5];
    int sum = 0;
    int i;

    printf("输入5名学生的分数。\n");

    for (i = 0; i < 5; i++) {
        printf("%2d号同学: ", i + 1); scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("和为%5d\n", sum );
    printf("平均值:%.3f\n",(double) sum / 5 );


    return 0;
}