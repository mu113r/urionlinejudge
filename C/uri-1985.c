#include <stdio.h>

int main ()
{
    int n, item, quantidade, i, j;
    double soma = 0;
    
    scanf("%d", &n);
    
    for(j = 0;j < n;j++)
    {
        scanf("%d %d", &item, &quantidade);
        
        if(item == 1001)
        {
            for(i = 0;i < quantidade;i++)
            {
                soma += 1.50;
            }
        }
        else if(item == 1002)
        {
            for(i = 0;i < quantidade;i++)
            {
                soma += 2.50;
            }
        }
        else if(item == 1003)
        {
            for(i = 0;i < quantidade;i++)
            {
                soma += 3.50;
            }
        }
        else if(item == 1004)
        {
            for(i = 0;i < quantidade;i++)
            {
                soma += 4.50;
            }
        }
        else if(item == 1005)
        {
            for(i = 0;i < quantidade;i++)
            {
                soma += 5.50;
            }
        }
    }
    
    printf("%.2lf\n", soma);
    
    return 0;
}
