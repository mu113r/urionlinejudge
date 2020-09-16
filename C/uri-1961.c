#include <stdio.h>

int main ()
{
    int jump, n, i, dif, vitoria = 1;
    scanf("%d %d", &jump, &n);
    int h[n];
    
    for(i = 0;i < n;i++)
    {
        scanf("%d", &h[i]);
    }
        
    for(i = 0; i < n-1;i++)
    {
        dif = h[i+1]-h[i];
        if(dif < 0)
        {
            dif = dif * -1;
        }
        if(dif > jump)
        {
            vitoria = 0;
        }
    }
    if(vitoria)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }
    
    return 0;
}
