#include <stdio.h>
#include <math.h>

int main ()
{
    double n, fibo;
    
    scanf("%lf", &n);
    
    fibo = (pow(((1+sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / sqrt(5);
    
    printf("%.1lf\n", fibo);
    
    return 0;
}
