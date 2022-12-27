#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *func(char *a, char *b) {
    char *res; int i = 0;
    res = malloc(strlen(a) + strlen(b) + 1);
    while (*a != '\0') {
        res[i] = *a;
        a++;
        i++;
    }

    while (*b != '\0') {
        res[i] = *b;
        b++;
        i++;
    }

    res[i] = '\0';
    return res;

}

int main() {
    char result[100];
    char a[] = "Hello ";
    char b[] = "World";
    char *l = func(a, b);
    printf("%s\n", l);
    strcpy(result, a);
    strcat(result, b);
    printf("%s\n", result);
    printf("%ld\n", strlen(a));
    char *m = strchr(a, 'o');
    int ind = (int)(m-a);
    printf("%d\n", ind);
    char *str;
    for (str = a; *str; str++) {
        if (strchr(b, *str)) {
            printf("%c inside %str\n", *str, a);
        }
    }
    printf("%ld\n", strcspn(a, b));
    return 0;
}