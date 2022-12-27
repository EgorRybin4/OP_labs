#include <stdio.h>
#include "malloc.h"
#include "math.h"

//var 21
void nod() {
    int a, b;
    printf("enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("nod=%d", i);
            break;
        }
    }
}

void nok() {
    int a, b;
    printf("enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("%d\n", i);
            break;
        }
    }
}

void t_2() {
    int n;
    double **arr, **total;
    printf("enter n\n");
    scanf("%d", &n);
    total = (double **) malloc(n * sizeof(double *));
    arr = (double **) malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        arr[i] = (double *) malloc(n * sizeof(double));
        total[i] = (double *) malloc(n * sizeof(double));
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            total[i][j] = sqrt(pow((arr[i][0] - arr[j][0]), 2) + pow((arr[i][1] - arr[j][1]), 2));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i < j) {
                printf("%d - %d: %lf\n", i + 1, j + 1, total[i][j]);
            }

        }
    }
}

int main() {//var 21
//    nod();
//    nok();
    t_2();
    return 0;
}