#include <stdio.h>

int main ()
{
    int mes, dia;
    
    while(scanf("%d %d", &mes, &dia) != EOF)
    {
        if(mes == 12 && dia == 25)
        {
            printf("E natal!\n");
        }
        else if(mes == 12 && dia == 24)
        {
            printf("E vespera de natal!\n");
        }
        else if(mes == 12 && dia > 25)
        {
            printf("Ja passou!\n");
        }
        else if(mes == 12 && dia < 24)
        {
            printf("Faltam %d dias para o natal!\n", (25 - dia));
        }
        else if(mes == 11)
        {
            printf("Faltam %d dias para o natal!\n", (55 - dia));
        }
        else if(mes == 10)
        {
            printf("Faltam %d dias para o natal!\n", 86 - dia);
        }
        else if(mes == 9)
        {
            printf("Faltam %d dias para o natal!\n", 116 - dia );
        }
        else if(mes == 8)
        {
            printf("Faltam %d dias para o natal!\n", 147 - dia);
        }
        else if(mes == 7)
        {
            printf("Faltam %d dias para o natal!\n", 178 - dia);
        }
        else if(mes == 6)
        {
            printf("Faltam %d dias para o natal!\n", 208 - dia);
        }
        else if(mes == 5)
        {
            printf("Faltam %d dias para o natal!\n", 239 - dia);
        }
        else if(mes == 4)
        {
            printf("Faltam %d dias para o natal!\n", 269 - dia);
        }
        else if(mes == 3)
        {
            printf("Faltam %d dias para o natal!\n", 300 - dia);
        }
        else if(mes == 2)
        {
            printf("Faltam %d dias para o natal!\n", 329 - dia);
        }
        else
        {
            printf("Faltam %d dias para o natal!\n", 360 - dia);
        }
    }
    
    return 0;
}
