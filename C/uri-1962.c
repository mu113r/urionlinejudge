#include <stdio.h>

int main ()
{
    int n, neg = 0, i;
    double t, dif;
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++)
    {
        neg = 0;
        scanf("%lf", &t);
        dif = 2015 - t;
        if(dif < 0)
        {
            dif = (dif * -1) + 1;
            neg = 1;
        }
        else if(dif == 0)
        {
            dif = dif + 1;
            neg = 1;
        }
        
        if(neg)
        {
            printf("%.0lf A.C.\n", dif);
        }
        else
        {
            printf("%.0lf D.C.\n", dif);
        }
    }
    
    return 0;
}
