/*
显示左上角的等腰直角三角
*/
#include <stdio.h>

int main(void) {
    int i, j, len;

    puts("生成直角在左上角的等腰三角形");

    printf("短边: ");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len + 1 - i; j++)
            putchar('*');
        putchar('\n');
    }


// for(i = 1;i <= len;i++)
// {
// 		for(j = 1;j <=i - len;j++ )
// 			putchar(' ');
// 		for(j = 1;j <=len +1 - i;j++ )
// 			putchar('*');
// 		putchar('\n');

// }
    
    return 0;
}