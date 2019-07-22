/*
显示所输入的月份所处的季节. switch
*/
#include <stdio.h>

int main(void) {

    int month;

    printf("请输入月份: ");
    scanf("%d", &month);

    // // if (month >= 3 && month <= 5)
    //     printf("%d月是春季。\n", month);
    // else if (month >= 6 && mouth <= 8)
    //     printf("%d月是夏季。\n", month);
    // else if (month >= 9 && month <= 11)
    //     printf("%d月是秋季。\n", month);
    // else if (moth == 1 || month == 2 || month == 12)
    //     printf("%d月是冬季。\n", month);



    switch (month) {
    case 12 :
    case 1 :
    case 2 : puts("是冬季。");                break;
    case 3 :
    case 4 :
    case 5 : puts("春季");                      break;
    case 6:
    case 7 :
    case 8 : puts("夏季");                      break;
    case 9 :
    case 10 :
    case 11: puts("秋季");                      break;

    default : puts("输入的月份有问题");
    }

    return 0;
}