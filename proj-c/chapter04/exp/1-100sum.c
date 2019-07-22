/*
计算1到100的和
*/
#include <stdio.h>

int main(void) {

    int i = 1 ;
    int sum;
    sum = 0;

    // do {
    //     sum = sum + i; i++;
    // } while (i <= 100);
    // printf("一到一百的和为:%d。\n", sum);



    // while (i <= 100) {
    //     sum = sum + i; i++;
    // };
    //     printf("一到一百的和为:%d。\n", sum);


    for (i = 1; i <= 100; i++)
        sum = sum + i;
    putchar('\n');

    printf("和为: %d。\n", sum);

    return 0;
}