#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_char(char *ditdash)
{
    // printf("Entrou no imprime char\n");
    // printf("ditdash = %s\n", ditdash);
    if(strcmp(ditdash, "01") == 0)
    {
       printf("a");
    }
    else if(strcmp(ditdash, "1000") == 0)
    {
       printf("b");
    }
    else if(strcmp(ditdash, "1010") == 0)
    {
       printf("c");
    }
    else if(strcmp(ditdash, "100") == 0)
    {
       printf("d");
    }
    else if(strcmp(ditdash, "0") == 0)
    {
       printf("e");
    }
    else if(strcmp(ditdash, "0010") == 0)
    {
       printf("f");
    }
    else if(strcmp(ditdash, "110") == 0)
    {
       printf("g");
    }
    else if(strcmp(ditdash, "0000") == 0)
    {
       printf("h");
    }
    else if(strcmp(ditdash, "00") == 0)
    {
       printf("i");
    }
    else if(strcmp(ditdash, "0111") == 0)
    {
       printf("j");
    }
    else if(strcmp(ditdash, "101") == 0)
    {
       printf("k");
    }
    else if(strcmp(ditdash, "0100") == 0)
    {
       printf("l");
    }
    else if(strcmp(ditdash, "11") == 0)
    {
       printf("m");
    }
    else if(strcmp(ditdash, "10") == 0)
    {
       printf("n");
    }
    else if(strcmp(ditdash, "111") == 0)
    {
       printf("o");
    }
    else if(strcmp(ditdash, "0110") == 0)
    {
       printf("p");
    }
    else if(strcmp(ditdash, "1101") == 0)
    {
       printf("q");
    }
    else if(strcmp(ditdash, "010") == 0)
    {
       printf("r");
    }
    else if(strcmp(ditdash, "000") == 0)
    {
       printf("s");
    }
    else if(strcmp(ditdash, "1") == 0)
    {
       printf("t");
    }
    else if(strcmp(ditdash, "001") == 0)
    {
       printf("u");
    }
    else if(strcmp(ditdash, "0001") == 0)
    {
       printf("v");
    }
    else if(strcmp(ditdash, "011") == 0)
    {
       printf("w");
    }
    else if(strcmp(ditdash, "1001") == 0)
    {
       printf("x");
    }
    else if(strcmp(ditdash, "1011") == 0)
    {
       printf("y");
    }
    else if(strcmp(ditdash, "1100") == 0)
    {
       printf("z");
    }
    else
    {
        printf("%s valor nao identificado como letra\n", ditdash);
    }
    memset(ditdash, '\0', 10);
}

int main ()
{
    int n, i, j, dd, tam, dot, ig;
    char ditdash[10];
    char text[1001];
    
    scanf("%d", &n);
    getchar();
    dd = 0;
    for(i = 0;i < n;i++)
    {
        fgets(text, 1000, stdin);
        tam = strlen(text);
        text[tam-1] = '\0';
        tam = strlen(text);
        memset(ditdash, '\0', 10);
        dd = 0;
        dot = 0;
        ig = 0;
        // printf("%s ig = %d dot = %d\n", text, ig, dot);
        for(j = 0;j < tam;j++)
        {
            if(text[j] == '=')
            {
                if(dot == 3)
                {
                    imprime_char(ditdash);
                    dd = 0;
                }
                if(dot == 7)
                {
                    imprime_char(ditdash);
                    dd = 0;
                    printf(" ");
                }
                dot = 0;
                ig++;
            }
            else
            {
                if(ig == 1)
                {
                    ditdash[dd] = '0';
                    dd++;
                }
                else if(ig == 3)
                {
                    ditdash[dd] = '1';
                    dd++;
                }
                ig = 0;
                dot++;
            }
            // printf("dot = %d ig = %d\n", dot, ig);
        }
        if(ig == 1)
        {
            ditdash[dd] = '0';
            dd++;
        }
        else if(ig == 3)
        {
            ditdash[dd] = '1';
            dd++;
        }
        imprime_char(ditdash);
        printf("\n");
    }
    
    return 0;
}
