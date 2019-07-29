//通过键盘输入三角形的底和高，求三角形的面积并显示。
#include <stdio.h>

int main(void) {
    int a, b;	//a是三角形的底，b是三角形的高

    printf("输入三角形的底: ");	scanf("%d", &a);
    printf("输入三角形的高: ");	scanf("%d", &b);

    printf("三角形的面积是:%.2f。\n", (double)(a * b) / 2);

    return 0;
}