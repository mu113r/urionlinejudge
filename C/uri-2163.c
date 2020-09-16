#include <stdio.h>

int main ()
{
    int m, n, i, j, x = 0, y = 0;
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 1;i < m-1;i++)
    {
        for(j = 1;j < n-1;j++)
        {
            if(matrix[i][j] == 42)
            {
                if(matrix[i-1][j-1] == 7 && matrix[i-1][j] == 7 && matrix[i-1][j+1] == 7 && matrix[i][j-1] == 7 && matrix[i][j+1] == 7 && matrix[i+1][j-1] == 7 && matrix[i+1][j] == 7 && matrix[i+1][j+1] == 7)
                {
                    x = i+1;
                    y = j+1;
                }
            }
        }
    }
    
    printf("%d %d\n", x, y);
    
    return 0;
}
