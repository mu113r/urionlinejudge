#include <stdio.h>
#include <string.h>

char nome1[50];
char nome2[50];
int par = 1;

void separa(char frase[100])
{
    memset(nome1, '\0', 50);
    memset(nome2, '\0', 50);
    int i = 0, j = 0;
    while(frase[i] != ' ')
    {
        nome1[i] = frase[i];
        i++;
    }
    i++;
    if(frase[i] == 'P')
    {
        par = 1;
    }
    else
    {
        par = 0;
    }
    //printf("%c %d", frase[i], par);
    while(frase[i] != ' ')
    {
        i++;
    }
    i++;
    //printf("%c", frase[i]);
    while(frase[i] != ' ')
    {
        nome2[j] = frase[i];
        j++;
        i++;
    }
    
}
int main ()
{
    int n, i, a, b;
    char frase[100];
    
    scanf("%d", &n);
    getchar();
    
    for(i = 0;i < n;i++)
    {
        gets(frase);
        separa(frase);
        
        //printf("nome1 = %s, nome2 = %s\n", nome1, nome2);
        scanf("%d %d", &a, &b);
        getchar();
        if(par == 1)
        {
            if(a%2 == 0 && b%2 == 0)
            {
                printf("%s\n", nome1);
            }
            else if(a%2 != 0 && b%2 != 0)
            {
                printf("%s\n", nome1);
            }
            else
            {
                printf("%s\n", nome2);
            }
        }
        else
        {
            if(a%2 == 0 && b%2 == 0)
            {
                printf("%s\n", nome2);
            }
            else if(a%2 != 0 && b%2 != 0)
            {
                printf("%s\n", nome2);
            }
            else
            {
                printf("%s\n", nome1);
            }
        }
    }
    
    return 0;
}
