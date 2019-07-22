/*
代码清单3-9是判断所输入的整数值的符号的程序，
请将其改写为可以将输入显示这一过程循环任意次。
*/
#include<stdio.h>
int main(void) {
    int no;
    int retry;

    do {
        printf("输入整数: ");
        scanf("%d", &no);

        if (no == 0)
            puts("整数是0");
        else if (no > 0)
            puts("整数是正数");
        else
            puts("整数是负数");

        printf("是否继续？<yes···0/no···9>: ");
        scanf("%d", &retry);
    } while (retry == 0)

        return 0;
}