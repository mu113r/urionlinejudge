#include <stdio.h>
#include <stdlib.h>

int main () {
    double m, p, av;
    
    scanf("%lf %lf", &m, &p);
    
    av = m/p;
    
    printf("%.2lf\n", av);
    
    return 0;
}
