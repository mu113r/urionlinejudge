#include <stdio.h>

int main () {
    double i, s=0;
    
    for(i = 1;i <101;i++) {
        s += 1/i;
    }
    
    printf("%.2lf\n", s);
    
    return 0;
}
