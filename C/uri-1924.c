#include <stdio.h>

int main()
{
    int n, i;
    char curso[110];
    scanf("%d", &n);
    getchar();
    
    for(i = 0;i < n;i++)
    {
        gets(curso);
    }
    
    printf("Ciencia da Computacao\n");
    
    return 0;
}
