#include <stdio.h>

int main()
{
    int i, j, n;
    
    while(scanf("%d", &n) != EOF)
    {
        int m[n][n];
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                m[i][j] = 3;
                if(i == j)
                {
                    m[i][j] = 1;
                }
                if((i + j) == (n-1))
                {
                    m[i][j] = 2;
                }
            }
        }
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n-1;j++)
            {
                printf("%d", m[i][j]);
            }
            printf("%d\n", m[i][n-1]);
        }
        
    }
    
    return 0;
}
