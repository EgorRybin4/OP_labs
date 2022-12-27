#include <stdio.h>
#include "malloc.h"
void first(){
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    for (int i = 0; i < 7; i++) {
        printf("%5d", i);
    }
    printf("\n");
    for(int j=0;j<7;j++) {
        printf("%5d", arr[j]);
    }


}
void second() {
    int a_n, a_m, b_n, b_m, *a, *b, *c;
    printf("a=n*m\n");
    scanf("%d %d", &a_n, &a_m);
    printf("b=n*m\n");
    scanf("%d %d", &b_n, &b_m);
    a = (int *) malloc(a_n * a_n * sizeof(int));
    b = (int *) malloc(b_n * b_m * sizeof(int));
    c = (int *) malloc(a_m * b_n * sizeof(int));
    for (int i = 0; i < a_n; i++) {
        for (int j = 0; j < a_m; j++) {
            printf("a[%d][%d] =", i, j);
            scanf("%d", (a + i * a_m + j));
        }
    }
    for (int i = 0; i < b_n; i++) {
        for (int j = 0; j < b_m; j++) {
            printf("b[%d][%d] =", i, j);
            scanf("%d", (b + i * b_m + j));
        }
    }
    if (a_m == b_n) {
        for (int i = 0; i < a_n; i++) {
            for (int j = 0; j < b_m; j++) {
                *(c + i * a_m + j)=0;
                for (int k = 0; k < a_n; ++k) {
                    *(c + i * b_n + j) += (*(a + i * a_m + k)) * (*(b + k * a_m + j));
                }
            }
        }
    }
    for (int i = 0; i < a_n; i++) {
        for (int j = 0; j < b_m; j++){
            printf("%5d",*(c + i * b_n + j));
        }
        printf("\n");
    }
}
int main(){
    first();
    return 0;
}
