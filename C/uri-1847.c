#include <stdio.h>

int main()
{
    int a, b, c, dif1, dif2;
    
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
    
        dif1 = b - a;
        dif2 = c - b;
        
        if(dif1 < 0 && dif2 >= 0)
        {
            printf(":)\n");
        }
        else if(dif1 > 0 && dif2 <= 0)
        {
            printf(":(\n");
        }
        else if(dif1 > 0 && dif2 > 0 && dif2 < dif1)
        {
            printf(":(\n");
        }
        else if(dif1 > 0 && dif2 > 0 && dif1 <= dif2)
        {
            printf(":)\n");
        }
        else if(dif1 < 0 && dif2 < 0 && dif2 > dif1)
        {
            printf(":)\n");
        }
        else if(dif1 < 0 && dif2 < 0 && dif2 <= dif1)
        {
            printf(":(\n");
        }
        else if(dif1 == 0 && dif2 > 0)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }
        
    return 0;
}
