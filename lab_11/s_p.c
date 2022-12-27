#include "stdlib.h"
#include "math.h"
#include "stdio.h"
struct pentagon {
    double x1, x2;
};
struct pentagon build() {
    struct pentagon tmp;
    scanf("%lf%lf", &tmp.x1, &tmp.x2);
    return tmp;
}
double s(struct pentagon tmp){
    return ((sqrt(5)*sqrt(5+2*sqrt(5))*(abs(tmp.x2-tmp.x1)*abs(tmp.x2-tmp.x1)))/4);
}
double p(struct pentagon tmp){
    return (abs(tmp.x2-tmp.x1)*5);
}