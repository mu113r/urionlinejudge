#include <stdio.h>
#include <string.h>

int main ()
{
    int tam;
    char s[501];
    
    gets(s);
    
    tam = strlen(s);
    if(tam < 81)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
