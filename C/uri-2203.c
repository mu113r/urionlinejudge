#include <stdio.h>
#include <math.h>

int main ()
{
    double xf, yf, xi, yi, vi, r1, r2, d1, at_range, at_dist;
    
    while(scanf("%lf %lf %lf %lf %lf %lf %lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF)
    {
        
        d1 = sqrt(pow((xf-xi), 2) + pow((yf-yi), 2)) + 1.5*vi;
        at_range = r1 + r2;
        at_dist = d1;
        if(at_dist < 0)
        {
            at_dist *= -1;
        }
        
        // printf("d1 = %.1lf, at_range = %.1lf, at_dist = %.1lf\n", d1, at_range, at_dist);
        if(at_range >= at_dist)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
