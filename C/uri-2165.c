#include <stdio.h>
#include <string.h>

int main ()
{
    int tam;
    char s[501];
    
    gets(s);
    
    tam = strlen(s);
    
    if(tam < 141)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }
    
    return 0;
}
