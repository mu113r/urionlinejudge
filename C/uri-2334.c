#include <stdio.h>
#include <stdlib.h>

int main ()
{
    while(1)
    {
        long double duck;
        scanf("%Lf", &duck);
        getchar();
        if(duck == -1)
            exit(0);
        if(duck > 0)
            duck = duck -1;
        
        printf("%.0Lf\n", duck);
    }
    
    return 0;
}
