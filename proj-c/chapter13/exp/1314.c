/*
内存管理
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define NL 9

int main(void) {
    int i;
    int *p1;
    int *p2;
    int *p3;

    if ((p1 = (int *)malloc(N * sizeof(int))) == NULL) {
        printf("malloc failed!\n");
        exit(1);
    }

    for (i = 0; i < N; i++) {
        p1[i] = i + 1;
    }

    if ((p2 = (int *)calloc(N , sizeof(int))) == NULL) {
        printf("calloc failed!\n");
        exit(1);
    }

    for (i = 0; i < N; i++) {
        p2[i] = i + 1;
    }

    //print
    for (i = 0; i < N; i++) {
        printf("%d ", p1[i]);
    }

    printf("\n");

    for (i = 0; i < N; i++) {
        printf("%d ", p2[i]);
    }

    printf("\n");

    free(p2);
    p2 = NULL;

    if ((p3 = (int *)realloc(p1, NL * sizeof(int))) == NULL) {
        printf("realloc failed1\n");
        exit(1);
    }

    for (i = N; i < NL; i++) {
        p3[i] = i + 1;
    }

    for (i = 0; i < NL; i++) {
        printf("%d ", p3[i]);
    }

    printf("\n");
    p3 = NULL;

    return 0;
}