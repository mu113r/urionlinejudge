#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, aux;
    
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
                aux = i - j;
                if(aux < 0)
                {
                    aux = aux * -1;
                }
                m[i][j] = aux + 1;
                
            }
        }
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n-1;j++)
            {
                if(m[i][j] < 10)
                {
                    printf("  %d ", m[i][j]);
                } else if(m[i][j] < 100)
                {
                    printf(" %d ", m[i][j]);
                } else
                {
                    printf("%d ", m[i][j]);
                }
            }
            if(m[i][n-1] < 10)
            {
                printf("  %d\n", m[i][n-1]);
            } else if(m[i][n-1] < 100)
            {
                printf(" %d\n", m[i][n-1]);
            } else
            {
                printf("%d\n", m[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
