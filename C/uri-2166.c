#include <stdio.h>

int main ()
{
    double div = 0, n, i;
    
    scanf("%lf", &n);
    
    for(i = 0;i < n;i++)
    {
        div += 2;
        div = 1/div;
    }
    
    printf("%.10lf\n", 1+div);
    
    return 0;
}
