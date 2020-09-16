#include <stdio.h>

int main()
{
    int n, i, resp, aux;
    
    scanf("%d", &n);
    
    int t[n];
    
    for(i = 0;i < n;i++)
    {
        scanf("%d", &t[i]);
    }
    
    aux = t[0];
    resp = 1;
    for(i = 0;i < n;i++)
    {
        if(t[i] < aux)
        {
            aux = t[i];
            resp = i+1;
        }
    }
    
    printf("%d\n", resp);
    
    return 0;
}
