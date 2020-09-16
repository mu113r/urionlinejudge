#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double m, n;
    
    while(1)
    {
        scanf("%lf %lf", &m, &n);
        if(m == 0 && n == 0)
        {
            exit(0);
        }
        printf("%.0lf\n", m*n);
    }
    
    return 0;
}
