#include <stdio.h>

int main ()
{
    int n, i;
    double st, sc, bt, bc, at, ac, somast = 0, somasc = 0, somabt = 0, somabc = 0, somaat = 0, somaac = 0;
    char c[50];
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i ++)
    {
        scanf("%s", c);
        scanf("%lf %lf %lf", &st, &bt, &at);
        somast += st;
        somabt += bt;
        somaat += at;
        scanf("%lf %lf %lf", &sc, &bc, &ac);
        somasc += sc;
        somabc += bc;
        somaac += ac;
    }
    
    printf("Pontos de Saque: %.2lf %%.\n", 100*somasc/somast);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100*somabc/somabt);
    printf("Pontos de Ataque: %.2lf %%.\n", 100*somaac/somaat);
    
    return 0;    
}
