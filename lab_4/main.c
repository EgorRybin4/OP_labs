#include <stdio.h>

int main()
{
    int x=21,x1,x2;
    x1=~((x&0xAAAFFF)-(x|7));
    x2=(((x|0xFF)-128)+x)^0x8;
    printf("%d %d",x1,x2);
    return 0;
}