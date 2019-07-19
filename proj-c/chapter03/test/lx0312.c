/*
输入的整数值是奇数还是偶数. 用switch语句改写
*/
#include <stdio.h>

int main(void)

{
    int no;

    printf("输入一个整数：");
    scanf("%d", &no);

    switch (no % 2) {
    case 0 : puts("整数值是偶数");              break;
    case 1 : puts("整数值是奇数");        	      break;
    default :puts("输入的值有问题");

    }


    return 0;
}