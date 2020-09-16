#include <stdio.h>
#include <string.h>

int main ()
{
    int tam, i;
    char s[50];
    char inv[50];
    
    memset(s, '\0', 50);
    memset(inv, '\0', 50);
    
    gets(s);
    
    tam = strlen(s);
    
    for(i = 0;i < tam;i++)
    {
        inv[tam-1-i] = s[i];
    }
    printf("%s\n", inv);
    
    return 0;
}
