#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i, pico = 1;
    
    scanf("%d", &n);
    int h[n];
    
    for(i = 0;i < n;i++)
    {
        scanf("%d", &h[i]);
    }
    
    if(h[1] == h[0])
    {
        pico = 0;
        printf("0\n");
        exit(0);
    }
    
    for(i = 2;i < n;i++)
    {
        if(h[i] == h[i-1])
        {
            pico = 0;
            break;
        }
        else if(h[i] > h[i-1] && h[i-1] > h[i-2])
        {
            pico = 0;
            break;    
        }
        else if(h[i] < h[i-1] && h[i-1] < h[i-2])
        {
            pico = 0;
            break;
        }
    }
    
    if(pico)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
    return 0;
}
