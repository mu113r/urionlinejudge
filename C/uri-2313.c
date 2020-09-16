#include <stdio.h>
#include <stdlib.h>

int eh_triangulo(int a, int b, int c)
{
    if(a+b > c && a+c > b && b+c > a)
        return 1;
    else
        return 0;
}

int eh_retangulo(int a, int b, int c)
{
    if(a > b && a > c)
    {
        if(a*a == (b*b+c*c))
            return 1;
        else
            return 0;
    }
    else if(b > a && b > c)
    {
        if(b*b == (a*a+c*c))
            return 1;
        else
            return 0;
    }
    else
    {
        if(c*c == (b*b+a*a))
            return 1;
        else
            return 0;
    }
}

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(!eh_triangulo(a, b, c))
    {
        printf("Invalido\n");
    }
    else if(eh_triangulo(a, b, c) && !eh_retangulo(a, b, c))
    {
        if(a == b && a == c)
            printf("Valido-Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
        printf("Retangulo: N\n");
    }
    else
    {
        if(a == b && a == c)
            printf("Valido-Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
        printf("Retangulo: S\n");
    }
    
    return 0;
}
