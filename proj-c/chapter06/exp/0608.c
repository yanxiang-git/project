/*
显示直角在右下角的等腰直角三角形
*/
#include <stdio.h>

void puts_chars(int ch, int n) {
    while ( n-- > 0)
        putchar(ch);
}

int main(void) {
    int i, len;

    printf("生成一个直角在右下方的等腰直角三角形: ");
    printf("短边是: \n"); scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        puts_chars(' ', len - i);
        puts_chars('*', i);
        putchar('\n');
    }

    return 0;
}