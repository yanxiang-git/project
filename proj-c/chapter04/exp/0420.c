/*
输入一个整数，显示该整数个*（循环次数可任意指定）
*/
#include <stdio.h>

int main(void) {
    int retry;
    int i, no;

    do {
        printf("输入一个正整数: ");  scanf("%d", &no);

        if (no < 0) {
            printf("请不要输入负整数! \n"); 		
        }
        for (i = 1; i <= no ; i++) {
            putchar('*');

        }

        putchar('\n');

        printf("是否继续执行: ?<yes···0 / no···9>"); scanf("%d", &retry);

    } while (retry == 0);

    return 0;
}