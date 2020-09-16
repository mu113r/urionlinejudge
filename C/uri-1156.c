#include <stdio.h>

int main () {
    double i, r=1, s=0;
    
    for(i = 1;i <40;i+=2) {
        //printf("s(%.2lf) = s(%.2lf) + i(%.2lf)/r(%.2lf)\n", s, s, i, r);
        s += i/r;
        r *= 2;
    }
    
    printf("%.2lf\n", s);
    
    return 0;
}
