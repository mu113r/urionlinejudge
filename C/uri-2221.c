#include <stdio.h>

int main ()
{
    int i, t, b, ai1, di1, li1, ai2, di2, li2, at1, at2;
    
    scanf("%d", &t);
    
    for(i = 0;i < t;i++)
    {
        scanf("%d", &b);
        scanf("%d %d %d", &ai1, &di1, &li1);
        scanf("%d %d %d", &ai2, &di2, &li2);
        
        at1 = (ai1+di1)/2;
        at2 = (ai2+di2)/2;
        if(li1%2 == 0)
        {
            at1 += b;
        }
        if(li2 % 2 == 0)
        {
            at2 += b;
        }
        
        if(at1 > at2)
        {
            printf("Dabriel\n");
        }
        else if(at2 > at1)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    
    return 0;
}
