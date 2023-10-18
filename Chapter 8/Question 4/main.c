/* Reverse a series of numbers */

#include <stdio.h>

#define N 10

int main(void) {
    int a[N], i;

    printf("Enter %d numbers:\t", (int) (sizeof(a) / sizeof(a[0])));
    for (i = 0; i < (int) (sizeof(a) / sizeof(a[0])); i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:\t");
    for (i = (int) (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    return 0;
}