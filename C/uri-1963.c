#include <stdio.h>

int main ()
{
    double a, b, dif, porcent;
    scanf("%lf %lf", &a, &b);
    
    dif = b - a;
    porcent = (dif/a)*100;
    
    printf("%.2lf%%\n", porcent);
    
    return 0;
}
