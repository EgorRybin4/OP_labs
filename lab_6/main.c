#include <stdio.h>
#include "malloc.h"
void first() {
    char arr[]={'a','b','c','d'},*p=arr;
    for(int i=0;i<4;i++){
        printf("%5c",*(p+i));
    }
}
void second(){
    char *arr;
    arr=(char *) malloc(4);
    for(int i=0;i<4;i++){
        *(arr+i)='a'+i;
    }
    printf("\n");
    for(int i=0;i<4;i++){
        printf("%5c",*(arr+i));
    }
}
int main(){
    first();
    second();
    return 0;
}