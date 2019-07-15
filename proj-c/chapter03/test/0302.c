/*
3-9 最后else 改为 else if（no < 0 ) 结果什么？
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("输入整数: ");
    scanf("%d", &no);

    if (no == 0)
        puts("整数是0");
    else if (no > 0)
        puts("整数是正数");
    else if (no < 0)
        puts("整数是负数");

    return 0;
}