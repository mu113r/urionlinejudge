#include <stdio.h>

int main ()
{
    long double n, l;
    long double p;
    
    scanf("%Lf %Lf", &n, &l);
    
    p = n * l;
    
    printf("%.0Lf\n", p);
    
    return 0;
}
