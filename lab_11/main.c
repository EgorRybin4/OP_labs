#include <stdio.h>
#include "s_p.h"
struct pentagon {
    double x1, x2;
};
int main() {//var 17;
    struct pentagon pentagon = build();
    printf("s=%lf\np=%lf", s(pentagon), p(pentagon));
}
