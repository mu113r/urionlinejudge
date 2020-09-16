#include <stdio.h>
#include <string.h>

int main ()
{
    int n, i;
    double tam;
    char s[10001];
    
    scanf("%d", &n);
    getchar();
    
    for(i = 0;i < n;i++)
    {
        gets(s);
        tam = strlen(s);
        tam *= 0.01;
        printf("%.2lf\n", tam);
    }
    
    return 0; 
}
