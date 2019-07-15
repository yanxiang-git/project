/*
读取一个整数并且显示其加上12的结果
*/
#include<stdio.h>
int main(void) {
	int no;
    printf("读取一个整数：");
    scanf("%d", &no);
    printf("您读取的整数加上12的结果是%d。\n", no + 12 );
    return 0;
}