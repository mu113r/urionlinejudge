#include <stdio.h>

int main()
{
    int i, j, n, startPos;
    
    while(scanf("%d", &n) != EOF)
    {
        int m[n][n];
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                m[i][j] = 0;
            }
        }
        for(i = 0;i < n;i++)
        {
            m[i][i] = 2;
            m[i][n-i-1] = 3;
        }
        startPos = n/3;
        for(i = startPos;i < n-startPos;i++)
        {
            for(j = startPos;j < n-startPos;j++)
            {
                m[i][j] = 1;
            }
        }
        if(n%2 != 0)
        {
            m[n/2][n/2] = 4;
        }
        
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
