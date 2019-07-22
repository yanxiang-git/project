/*
读取两个整数，显示前者是后者的百分之几。
*/
#include <stdio.h>

int main(void) {
    int a, b;

    puts("输入两个整数。 ");
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);

    printf("a的值是b的%f%%。\n", (double)100 * a / b  );

    return 0;
}