/*
创建一个函数，返回1到n之间所有整数的和
*/
#include <stdio.h>

int sumup (int n) {
    int sum;
    int i ;


    for (i = 1; i <= n; i++)
        sum += i;

    return sum;

}

int main(void) {
    int n;


    puts("输入整数。");
    printf("整数n: ");	scanf("%d", &n);


    printf("1到%d之间的整数和:%d\n", n, sumup(n));


    return 0;
}