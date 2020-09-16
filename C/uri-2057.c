#include <stdio.h>

int main ()
{
    int s, t, f, soma;
    
    scanf("%d %d %d", &s, &t, &f);
    
    soma = s + t + f;
    if(soma > 24)
    {
        soma -= 24;
    }
    
    if(soma < 0)
    {
        soma += 24;
    }
    
    printf("%d\n", soma);
    
    return 0;
}
