/*
把数组的全部元素 倒序 复制 到另一个数组中
*/
#include <stdio.h>

int main(void) {
    int i;
    int a[6] = {21 , 32 , 4 , 6 };
    int b[6];

    for (i = 0; i < 6; i++) {
        b[i] = a[i];
    }

    for (i = 0; i < 3; i++) {
        int temp = b[i];

        b[i] 	 = b[5 - i];
        b[5 - i] = temp;
    }

    puts(" a  b ");
    puts("-------");

    for (i = 0; i < 6; i++)
        printf("%2d %2d\n", a[i], b[i] );

    return 0;
}