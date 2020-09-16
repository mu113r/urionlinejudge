#include <stdio.h>

int main ()
{
    int n, i;
    char j1[10];
    char j2[10];
    
    scanf("%d", &n);
    getchar();
    
    for(i = 0;i < n;i++)
    {
        gets(j1);
        gets(j2);
        
        if(j1[1] == 't' && j2[1] == 't')
        {
            printf("Aniquilacao mutua\n");
        }
        else if(j1[1] == 't' && j2[1] == 'e')
        {
            printf("Jogador 1 venceu\n");
        }
        else if(j1[1] == 't' && j2[1] == 'a')
        {
            printf("Jogador 1 venceu\n");
        }
        else if(j1[1] == 'e' && j2[1] == 't')
        {
            printf("Jogador 2 venceu\n");
        }
        else if(j1[1] == 'e' && j2[1] == 'e')
        {
            printf("Sem ganhador\n");
        }
        else if(j1[1] == 'e' && j2[1] == 'a')
        {
            printf("Jogador 1 venceu\n");
        }
        else if(j1[1] == 'a' && j2[1] == 't')
        {
            printf("Jogador 2 venceu\n");
        }
        else if(j1[1] == 'a' && j2[1] == 'e')
        {
            printf("Jogador 2 venceu\n");
        }
        else if(j1[1] == 'a' && j2[1] == 'a')
        {
            printf("Ambos venceram\n");
        }
    }
    
    return 0;
}
