#include <stdio.h>
#include <stdlib.h>

int main()
{
    char entrada[100];
    int c = 0, total = 0;
    
    while(c < 3)
    {
        gets(entrada);
        if(entrada[0] == 'c')
        {
            printf("%d\n", total);
            c++;
            total = 0;
        }
        else
        {
            if(entrada[0] == '*')
            {
                total += 4;
            }
            if(entrada[1] == '*')
            {
                total += 2;
            }
            if(entrada[2] == '*')
            {
                total += 1;
            }
        }
        
    }
    
    return 0;
}
