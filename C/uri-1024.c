#include <stdio.h>
#include <string.h>

int main () {
    int i, j, x;
    char entrada[1000];
    char saida[1000];
    char a, b, c;
    
    scanf("%d", &x);
    getchar();
    
    for( ; x > 0; x--) {
        fgets(entrada, 1000, stdin);
        
        b = (int)strlen(entrada); //tamanho da saida
        c = (int)(b/2); //c recebe parte inteira de tamanho dividido por 2
        
        for(i = 0; i < c; i++) { 
            
            
            a = entrada[i];
            if(a != 32) {
                entrada[i] = entrada[i] + 2;
            } else {
                break;
            }
        }
        
        for(i = c; i < strlen(entrada); i++) {
           
            a = entrada[i];
            if(a != 32) {
                entrada[i] = entrada[i] + 2;
            } else {
                break;
            }
        }
        
        for(i = 0; i < strlen(entrada); i++) {

            j = ((int)strlen(entrada)-1) - i;
            saida[i] = entrada[j];

        }

        for(i = strlen(entrada); i < 1000; i++) {
            saida[i] = '\0';
        }

        printf("%d", (int)strlen(saida));
        printf("%s\n", saida);
    }
    
    return 0;
}
