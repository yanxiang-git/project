/*
输入一个整数，连续显示出该整数个*
*/
#include <stdio.h>

int main(void) {
    int a;

    printf("输入整数: "); scanf("%d", &a);

    // while (a-- > 0) {

    //     putchar('*');
    // }
    // putchar('\n');

while (a++ < 0) {

        putchar('*');
    }
    putchar('\n');


    return 0;
}
