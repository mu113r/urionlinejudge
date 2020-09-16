#include <stdio.h>

int main ()
{
    int n, reg, best_reg = 0, i;
    double nota, best_nota = 0;
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++)
    {
        scanf("%d %lf", &reg, &nota);
        if(nota > best_nota)
        {
            best_nota = nota;
            best_reg = reg;
        }
    }
    if(best_nota < 8)
    {
        printf("Minimum note not reached\n");
    }
    else
    {
        printf("%d\n", best_reg);
    }
    
    return 0;
}
