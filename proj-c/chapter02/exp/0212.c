/*
读取表示身高的整数值，显示出标准体重的实数值，
标准体重根据公式（身高 - 100 ） * 0.9 进行计算 结果保留一位小数
*/
#include <stdio.h>
int main(void) {
    int height;
    double weight;

    puts("身高： ");
    scanf("%d", &height );
  //printf("身高: ");  scanf("%d",&height);

    printf("标准体重：%.1f公斤。\n",(height - 100) * 0.9 );


    return 0;
}