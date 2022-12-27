#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
enum sugar{
    cake, icecream, pie, sweet
};
typedef struct Pt{
    int x;
    int y;
} point;
typedef struct Sq{
    point A;
    point B;
    point C;
    point D;
} square;
unsigned char flags;
double perimetr(struct Sq *s) {
    int AB;
    double zone;
    AB=abs(s->A.x-s->B.x);
    zone=AB*AB;
    return zone;
}
enum {
    DSL= 0b0001,
    ppp = 0b0010,
    LINK = 0b0100,
};
union {
    struct {
        unsigned int DSL : 1;
        unsigned int ppp : 1;
        unsigned int Link : 1;
    };
    unsigned int flags;
} cond;

int main() {
    enum sugar sw;
    sw=sweet;
    printf("%d\n", sw+1);
    square h;
    h.A.x=0; h.A.y=4;
    h.B.x=4; h.B.y=4;
    h.C.x=4; h.C.y=0;
    h.D.x=0; h.D.y=0;
    double res=perimetr(&h);
    printf("%lf\n", res);
    scanf("%x", &cond.flags);
    if (cond.DSL)
        printf("DSL is on\n");
    else
        printf("DSL is off\n");

    if (cond.ppp)
        printf("PPP is on\n");
    else
        printf("PPP is off\n");

    if (cond.Link)
        printf("Link is on\n");
    else
        printf("Link is off\n");
    return 0;
}