#include <stdio.h>

int main ()
{
    double n, nmenos, total;
    
    scanf("%lf", &n);
    
    nmenos = n - 3;
    total = nmenos * n;
    total = total / 2;
    
    printf("%.0lf\n", total);
    
    return 0;
}
