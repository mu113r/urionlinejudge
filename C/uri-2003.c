#include <stdio.h>

int main ()
{
    int h, min, delay;
    
    while(scanf("%d:%d", &h, &min) != EOF)
    {
        delay = 0;
        if(h == 7)
        {
            delay = min;
        }
        else if(h == 8)
        {
            delay = min + 60;
        }
        else if(h == 9)
        {
            delay = min + 120;
        }
        
        printf("Atraso maximo: %d\n", delay);
    }
    
    return 0;
}
