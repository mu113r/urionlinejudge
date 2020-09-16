#include <stdio.h>

int main ()
{
    int n, i, j, mudou;
    double notas[8];
    double d, soma, aux;
    char nome[50];
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++)
    {
        mudou = 1;
        scanf("%s", nome);
        scanf("%lf", &d);
        for(j = 0;j < 7;j++)
        {
            scanf("%lf", &notas[j]);
        }
        while(mudou)
        {
            mudou = 0;
            for(j = 0;j < 6;j++)
            {
                if(notas[j] > notas[j+1])
                {
                    mudou = 1;
                    aux = notas[j];
                    notas[j] = notas[j+1];
                    notas[j+1] = aux;
                }
            }
        }
        
        soma = 0;
        for(j = 1;j < 6;j++)
        {
            soma += notas[j];
        }
        printf("%s %.2lf\n", nome, soma*d);
    }
    
    return 0;
}
