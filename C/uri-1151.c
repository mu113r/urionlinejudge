#include <stdio.h>

int main()
{
    int n = 0;
    int ant = 0;
    int atual = 1;
    int prox = ant + atual;
    int c = 0;

    scanf("%d", &n);
    
    for(c = 0; c < n - 1; c++) // um loop a menos que a quantidade informada para evitar espaco no final da linha
    {
        printf("%d ", ant);
        ant = atual;
        atual = prox;
        prox = ant + atual;
    }
    
    printf("%d\n", ant); //imprime o ultimo numero, completando a quantidade de numero solicidata, de forma a evitar que sobre um espaco no final da linha.

    return 0;
}
