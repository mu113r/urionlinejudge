#include <stdio.h>

int main ()
{
    int n, i, aux, resp = 0;
    int x[101];
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++)
    {
        scanf("%d", &x[i]);
    }
    
    aux = x[0];
    
    for(i = 1;i < n;i++)
    {
        if(x[i] < aux)
        {
            resp = i+1;
            break;
        }
        aux = x[i];
    }
    
    printf("%d\n", resp);
    
    return 0;
}
