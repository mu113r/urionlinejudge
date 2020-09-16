#include <stdio.h>

int main ()
{
    int caso = 1, n, soma, i, j;
    
    while(scanf("%d", &n) != EOF)
    {
        soma = 0;
        if(n == 0)
        {
            for(i = 0;i <= n;i++)
            {
                for(j = 0;j <= i;j++)
                {
                    soma++;
                } 
            }
        }
        else
        {
            for(i = 1;i <= n;i++)
            {
                if(i == 1)
                {
                    soma++;
                }
                for(j = 1;j <= i;j++)
                {
                    soma++;
                } 
            }
        }
        
        if(soma < 2)
        {
            printf("Caso %d: %d numero\n", caso, soma);
        }
        else
        {
            printf("Caso %d: %d numeros\n", caso, soma);
        }
        
        if(n == 0)
        {
            for(i = 0;i <= n;i++)
            {
                for(j = 0;j <= i;j++)
                {
                    printf("%d", i);
                } 
            }
        }
        else
        {
            for(i = 1;i <= n;i++)
            {
                if(i == 1)
                {
                    printf("0 ");
                }
                for(j = 1;j <= i;j++)
                {
                    if(i == n && j == n)
                    {
                        printf("%d", i);
                    }
                    else
                    {
                        printf("%d ", i);
                    }
                } 
            }
        }
        printf("\n\n");
        caso++;
    }
    
    return 0;
}
