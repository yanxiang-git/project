/*
对数组的全部元素进行倒序排列. 用宏进行修改 
*/
#include <stdio.h>
#define NUMBER 5

int main(void) {
    int i;
    int a[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("a[%d]: ", i); scanf("%d", &a[i]);
    }

    for (i = 0; i < NUMBER / 2; i++) {
        int temp = a[i];

        a[i] 	 = a[4 - i];
        a[4 - i] = temp;
    }

    puts("倒序排列");
    for (i = 0; i < NUMBER; i++)
        printf("a[%d]=%d\n", i, a[i]);

    return 0;
}