#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            exit(0);
        }
        int m[n][n];
        
        for(i = 0;i < n/2;i++)
        {
            for(j = i;j < n-i;j++) 
            {
                m[i][j] = i + 1;
                m[j][i] = i + 1;
                
                m[n-i-1][j] = i + 1;
                m[j][n-i-1] = i + 1;
            }
        }
        if(n%2!=0)
        {
            m[(n/2)][(n/2)] = i+1;
        }
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n-1;j++)
            {
                if(m[i][j] < 10)
                {
                    printf("  %d ", m[i][j]);
                } else
                {
                    printf(" %d ", m[i][j]);
                }
            }
            printf("  %d\n", m[i][n-1]);
            
        }
        printf("\n");
    }
    
    return 0;
}
