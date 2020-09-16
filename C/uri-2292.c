#include <stdio.h>
#include <string.h>

int main ()
{
    char s[65];
    unsigned long long swi, t, i, j, k, tam, mudou;
    
    memset(s, '\0', 65);
    scanf("%llu", &t);
    getchar();
    
    for(i = 0;i < t;i++)
    {
        scanf("%s %llu", s, &swi);
        
        tam = strlen(s);
        for(j = 0;j < swi;j++)
        {
            if(s[0] == 'X')
            {
                s[0] = 'O';
            }
            else
            {
                s[0] = 'X';
                mudou = 1;
                for(k = 1;k < tam;k++)
                {
                    if(s[k-1] == 'X' && mudou)
                    {
                        if(s[k] == 'O')
                        {
                            s[k] = 'X';
                            mudou = 1;
                        }
                        else
                        {
                            s[k] = 'O';
                            mudou = 0;
                        }
                    }
                }
            }
        }
        printf("%s\n", s); 
    }
    
    return 0;
}
