#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, troco, i, possivel;
    int bill[21] = {4, 7, 10, 12, 20, 22, 40, 52, 100, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150, 200};
    while(1)
    {
        scanf("%d %d", &n, &m);
        if(n==0 && m==0)
        {
            exit(0);
        }
        troco = m - n;
        for(i=0, possivel = 0; i<21; i++)
        {
            if(bill[i] == troco)
            {
                possivel = 1;
                break;
            }
        }
        if(possivel)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
