#include <stdio.h>
#include <string.h>

int main ()
{
    char s[150];
    int tam, i, c = 0;
    memset(s, '\0', 150);
    
    gets(s);
    
    tam = strlen(s);
    
    for(i = 0;i < tam;i++)
    {
        if(s[i] == '1')
        {
            c++;
        }
    }
    
    if(c%2 == 0)
    {
        s[tam] = '0';
    }
    else
    {
        s[tam] = '1';
    }
    
    printf("%s\n", s);
    
    return 0;
}
