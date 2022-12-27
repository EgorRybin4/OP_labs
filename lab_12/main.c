#include <stdio.h>

int add(int x, int y){
    return x + y;
}

int main() {
    FILE *file = fopen("res.txt", "w");
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    fprintf(file, "Result: %d", add(x, y));
    fclose(file);
    return 0;
}