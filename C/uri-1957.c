#include <stdio.h>

int main ()
{
    int x, c = 0, resto, quociente, i, j;
    int resposta_invertida[9999];
    char resposta[9999];
    
    scanf("%d", &x);
    

    while (x >= 16)
    {
        resto = x%16;
        // printf("resto dentro do while = %d\n", resto);
        quociente = x/16;
        // printf("quociente dentro do while = %d\n", quociente);
        resposta_invertida[c] = resto;
        // printf("armazendado %d na posicao %d\n", resposta_invertida[c], c);
        c++;
        x = quociente;
    }
    
    resposta_invertida[c] = x;
  
    for(i = c, j = 0; i >=0;i--, j++)
    {
        if (resposta_invertida[i] == 0)
        {
            resposta[j] = '0';
        }
        else if (resposta_invertida[i] == 1)
        {
            resposta[j] = '1';
        }
        else if (resposta_invertida[i] == 2)
        {
            resposta[j] = '2';
        }
        else if (resposta_invertida[i] == 3)
        {
            resposta[j] = '3';
        }
        else if (resposta_invertida[i] == 4)
        {
            resposta[j] = '4';
        }
        else if (resposta_invertida[i] == 5)
        {
            resposta[j] = '5';
        }
        else if (resposta_invertida[i] == 6)
        {
            resposta[j] = '6';
        }
        else if (resposta_invertida[i] == 7)
        {
            resposta[j] = '7';
        }
        else if (resposta_invertida[i] == 8)
        {
            resposta[j] = '8';
        }
        else if (resposta_invertida[i] == 9)
        {
            resposta[j] = '9';
        }
        else if (resposta_invertida[i] == 10)
        {
            resposta[j] = 'A';
        }
        else if (resposta_invertida[i] == 11)
        {
            resposta[j] = 'B';
        }
        else if (resposta_invertida[i] == 12)
        {
            resposta[j] = 'C';
        }
        else if (resposta_invertida[i] == 13)
        {
            resposta[j] = 'D';
        }
        else if (resposta_invertida[i] == 14)
        {
            resposta[j] = 'E';
        }
        else
        {
            resposta[j] = 'F';
        }
    }
    
    printf("%s\n", resposta);
    
    return 0;
}
