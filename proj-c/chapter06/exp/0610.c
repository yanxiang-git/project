/*计算最高分
*/

#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top (void);

int main(void)

{
    extern int tensu[];
    int i;

    printf("输入%d名学生的分数。\n", NUMBER );
    for (i = 0; i < NUMBER; i++) {
        printf("%d:\n", i + 1 );
        scanf("%d", &tensu[i]);
    }
    printf("最高分=%d\n", top());
    return 0;
}

//返回数组的tensu的最大值(函数top的函数定义)

int top(void) {

    extern int tensu[];
    int i;
    int max = tensu[0];

    for (i = 1; i < NUMBER; i++)
        if (tensu[i] > max)
            max = tensu[i];
    return max;
}







