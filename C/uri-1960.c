#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    int tamanho, i, x;
    char entrada[10];
    
    gets(entrada);
    tamanho = strlen(entrada);
    
    for(i = 0; i < tamanho; i++)
    {
        x = entrada[i] - '0';
        if(tamanho == 3 && i == 0)
        {
            if(x == 1)
            {
                printf("C");
            }
            else if(x == 2)
            {
                printf("CC");
            }
            else if(x == 3)
            {
                printf("CCC");
            }
            else if(x == 4)
            {
                printf("CD");
            }
            else if(x == 5)
            {
                printf("D");
            }
            else if(x == 6)
            {
                printf("DC");
            }
            else if(x == 7)
            {
                printf("DCC");
            }
            else if(x == 8)
            {
                printf("DCCC");
            }
            else if(x == 9)
            {
                printf("CM");
            }
        }
        else if(tamanho == 3 && i == 1)
        {
            if(x == 1)
            {
                printf("X");
            }
            else if(x == 2)
            {
                printf("XX");
            }
            else if(x == 3)
            {
                printf("XXX");
            }
            else if(x == 4)
            {
                printf("XL");
            }
            else if(x == 5)
            {
                printf("L");
            }
            else if(x == 6)
            {
                printf("LX");
            }
            else if(x == 7)
            {
                printf("LXX");
            }
            else if(x == 8)
            {
                printf("LXXX");
            }
            else if(x == 9)
            {
                printf("XC");
            }
        }
        else if(tamanho == 3 && i == 2)
        {
            if(x == 1)
            {
                printf("I");
            }
            else if(x == 2)
            {
                printf("II");
            }
            else if(x == 3)
            {
                printf("III");
            }
            else if(x == 4)
            {
                printf("IV");
            }
            else if(x == 5)
            {
                printf("V");
            }
            else if(x == 6)
            {
                printf("VI");
            }
            else if(x == 7)
            {
                printf("VII");
            }
            else if(x == 8)
            {
                printf("VIII");
            }
            else if(x == 9)
            {
                printf("IX");
            }
        }
        if(tamanho == 2 && i == 0)
        {
            if(x == 1)
            {
                printf("X");
            }
            else if(x == 2)
            {
                printf("XX");
            }
            else if(x == 3)
            {
                printf("XXX");
            }
            else if(x == 4)
            {
                printf("XL");
            }
            else if(x == 5)
            {
                printf("L");
            }
            else if(x == 6)
            {
                printf("LX");
            }
            else if(x == 7)
            {
                printf("LXX");
            }
            else if(x == 8)
            {
                printf("LXXX");
            }
            else if(x == 9)
            {
                printf("XC");
            }
        }
        else if(tamanho == 2 && i == 1)
        {
            if(x == 1)
            {
                printf("I");
            }
            else if(x == 2)
            {
                printf("II");
            }
            else if(x == 3)
            {
                printf("III");
            }
            else if(x == 4)
            {
                printf("IV");
            }
            else if(x == 5)
            {
                printf("V");
            }
            else if(x == 6)
            {
                printf("VI");
            }
            else if(x == 7)
            {
                printf("VII");
            }
            else if(x == 8)
            {
                printf("VIII");
            }
            else if(x == 9)
            {
                printf("IX");
            }
        }
        if(tamanho == 1 && i == 0)
        {
            if(x == 1)
            {
                printf("I");
            }
            else if(x == 2)
            {
                printf("II");
            }
            else if(x == 3)
            {
                printf("III");
            }
            else if(x == 4)
            {
                printf("IV");
            }
            else if(x == 5)
            {
                printf("V");
            }
            else if(x == 6)
            {
                printf("VI");
            }
            else if(x == 7)
            {
                printf("VII");
            }
            else if(x == 8)
            {
                printf("VIII");
            }
            else if(x == 9)
            {
                printf("IX");
            }
        }
    }
    printf("\n");
    
    return 0;
    
}
