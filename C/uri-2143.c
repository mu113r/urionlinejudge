#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int t, n, i;
    
    while(1)
    {
        scanf("%d", &t);
        if(t == 0)
        {
            exit(0);
        }
        
        for(i = 0;i < t;i++)
        {
            scanf("%d", &n);
            
            if(n % 2 == 0)
            {
                n -= 2;
                n *= 2;
                n += 2;
                printf("%d\n", n);
            }
            else
            {
                n -= 1;
                n *= 2;
                n += 1;
                printf("%d\n", n);
            }
            
        }
    }
    
    return 0;
}
