#include <stdio.h>

int main ()
{
    int n, m, i;
    char s[15];
    
    scanf("%d %d", &n, &m);
    getchar();
    
    for(i = 0;i < m;i++)
    {
        gets(s);
        
        if(s[0] == 'f')
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    
    if(n < 0)
    {
        n = 0;
    }
    
    printf("%d\n", n);
    
    return 0;
}
