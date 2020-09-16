#include <stdio.h>

int verifica(int a, int b, int c)
{
    int tri = 0;
    if((a + b > c) && (a + c > b) && (b + c > a))
    {
        tri = 1;
    }
    
    return tri;
}

int main ()
{
    int a, b, c, d, triangulo = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(verifica(a, b, c) || verifica(a, b, d) || verifica(a, c, d) || verifica(b, c, d))
    {
        triangulo = 1;
    }
    else
    { 
        triangulo = 0;
    }
    
    if(triangulo == 1)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}
