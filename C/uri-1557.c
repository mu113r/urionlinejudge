#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// retorna um inteiro que sera utilizado para contabilizar o numero de espacos
int nspace(int x)
{
    int b = 0;
    while(x)
    {
        x /= 10;
        b++;
    }
    
    return b;
}

int main()
{
    int i, j, n, t, tmax, ns, k;
    
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            exit(0);
        }
        
        int m[n][n];
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                m[i][j] = pow(2, (i+j));
            }
        }
        
        tmax = nspace(m[n-1][n-1]); 
        // define o numero maximo de espaços dada a matriz nxn 
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                if(j == 0) // para a primeira coluna
                {
                    t = nspace(m[i][j]); // numero de espaços para o numero atual
                    ns = tmax - t; // calculo no numero de espacos para alinhar
                    for(k = 0;k < ns;k++)
                    {
                        printf(" ");
                    }
                    printf("%d", m[i][j]);
                }
                else // para as demais colunas
                {
                    t = nspace(m[i][j]);
                    ns = tmax - t;
                    for(k = 0;k < ns;k++)
                    {
                        printf(" ");
                    }
                    printf(" %d", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
