#include <stdio.h>

int main ()
{
    double n, i, div;
    scanf("%lf", &n);
    
    div = 0;
    
    for(i = 0;i < n;i++)
    {
        div += 6;
        div = 1/div;
    }
    
    printf("%.10lf\n", 3+div);
    
    return 0;
}
