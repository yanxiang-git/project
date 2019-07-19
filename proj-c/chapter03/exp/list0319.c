/*
显示所输入的整数除以3的余数
*/
#include <stdio.h>

int main(void) {
    int a;

    puts("输入整数: ");
    scanf("%d", &a);

    switch (a % 3 ) {
    case 0 : puts("整数能被整除");            break;
    case 1 : puts("整数不能被整除，余数为1");   break;
    case 2 : puts("整数不能被整除，余数为2");   break;
    }
    return 0;
}