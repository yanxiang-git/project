/*
验证数据类型和运算
*/
#include <stdio.h>

int main(void) {
    int        n1 , n2 , n3, n4 ;
    double     d1 , d2 , d3, d4 ;

    n1 = 5 / 2;
    n2 = 5.0 / 2.0;
    n3 = 5.0 / 2;
    n4 = 5 / 2.0;

    d1 = 5 / 2;
    d2 = 5.0 / 2.0;
    d3 = 5.0 / 2;
    d4 = 5 / 2.0;

    printf("n1 =%d\n", n1 );
    printf("n2 =%d\n", n2 );
    printf("n3 =%d\n", n3 );
    printf("n4 =%d\n\n", n4 );


    printf("d1 =%lf\n", d1 );
    printf("d2 =%lf\n", d2 );
    printf("d3 =%lf\n", d3 );
    printf("d4 =%lf\n", d4 );

    return 0;
}