#include <stdio.h>
#include <string.h>

int main()
{
    int t, i;
    char sh[20];
    char raj[20];
    
    scanf("%d", &t);
    getchar();
    
    for(i = 0;i < t;i++)
    {
        scanf("%s %s", sh, raj);
        getchar();
        
        //printf("sheldon - %s e raj - %s", sh, raj);
        
        if(strcmp(sh, "tesoura") == 0)
        {
            if(strcmp(raj, "papel") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "Spock") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "lagarto") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "pedra") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "tesoura") == 0)
            {
                printf("Caso #%d: De novo!\n", i+1);
            }
        }
        else if(strcmp(sh, "papel") == 0)
        {
            if(strcmp(raj, "pedra") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "papel") == 0)
            {
                printf("Caso #%d: De novo!\n", i+1);
            }
            else if(strcmp(raj, "tesoura") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "lagarto") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "Spock") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
        }
        else if(strcmp(sh, "pedra") == 0)
        {
            if(strcmp(raj, "pedra") == 0)
            {
                printf("Caso #%d: De novo!\n", i+1);
            }
            else if(strcmp(raj, "papel") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "tesoura") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "lagarto") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "Spock") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
        }
        else if(strcmp(sh, "lagarto") == 0)
        {
            if(strcmp(raj, "pedra") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "papel") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "tesoura") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "lagarto") == 0)
            {
                printf("Caso #%d: De novo!\n", i+1);
            }
            else if(strcmp(raj, "Spock") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
        }
        else if(strcmp(sh, "Spock") == 0)
        {
            if(strcmp(raj, "pedra") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "papel") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "tesoura") == 0)
            {
                printf("Caso #%d: Bazinga!\n", i+1);
            }
            else if(strcmp(raj, "lagarto") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            }
            else if(strcmp(raj, "Spock") == 0)
            {
                printf("Caso #%d: De novo!\n", i+1);
            }
        }
    }
    
    return 0;
}
