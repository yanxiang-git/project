/*
读取两个整数并用浮点数显示出它们的平均值
*/
#include <stdio.h>

int main(void) {
    int a, b;

    puts("输入两个整数: ");
    printf("整数a: \n"); scanf("%d", &a);
    printf("整数b: \n"); scanf("%d", &b);

    // printf("它们的平均值:%f。\n",(double)(a + b)/ 2);

    printf("它们的平均值:%f。\n", (a + b) / 2.0);


    return 0;
}