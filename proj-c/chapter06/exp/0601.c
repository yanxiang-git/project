//	求出两个整数中较大的值
#include <stdio.h>

//返回较大整数值

int max2 (int a , int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(void) {
    int n1, n2;

    printf("输入两个整数:  \n");
    printf("整数1:  "); scanf("%d", &n1);
    printf("整数2:  "); scanf("%d", &n2);

    printf("较大的整数是:%d\n", max2(n1, n2));

    return 0;
}

