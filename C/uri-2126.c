#include <stdio.h>
#include <string.h>

int main ()
{
    int tam1, tam2, i, j, dif = 0, pos, c, pos_tmp;
    char n1[15];
    char n2[35];
    int caso = 1;
    
    while(gets(n1) != NULL)
    {
        gets(n2);
        c = 0;
        tam1 = strlen(n1);
        tam2 = strlen(n2);
        
        for(i = 0;i < tam2;i++)
        {
            if(n2[i] == n1[0])
            {
                dif = 0;
                pos_tmp = i+1;
                for(j = 0;j < tam1;j++)
                {
                    if(n2[i+j] != n1[j])
                    {
                        dif = 1;
                    }
                }
                if(dif == 0)
                {
                    pos = pos_tmp;
                    c++;
                }
            }
        }
        
        if(c == 0)
        {
            printf("Caso #%d:\n", caso);
            printf("Nao existe subsequencia\n\n");
        }
        else
        {
            printf("Caso #%d:\n", caso);
            printf("Qtd.Subsequencias: %d\n", c);
            printf("Pos: %d\n\n", pos);
        }
        
        caso++; 
        
    }
    
    return 0;
}
