#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, l, c, p;
    
    while(1)
    {
        scanf("%d", &l);
        if(l == 0)
        {
            exit(0);
        }
        scanf("%d %d", &c, &p);
        
        a = sqrt(l*c*100/p);
        
        printf("%d\n", a);
    }
    
    return 0;
}
