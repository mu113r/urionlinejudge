#include <stdio.h>

int main () {
    int i;
    double x;
    double n[100];
    
    scanf("%lf", &x);
    n[0] = x;
    
    for(i = 1; i < 100; i++) {
        n[i] = n[i-1]/2;
    }
    
    for(i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
    
    return 0;
}
