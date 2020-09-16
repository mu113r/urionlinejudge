#include <stdio.h>

int main () {
    int i, x, y, aux, soma=0;
    
    scanf("%d %d", &x, &y);
    
    if(y<x) {
        aux = y;
        y = x;
        x = aux;
    }
    
    //printf("x = %d e y = %d\n", x, y);
    for(i = x;i <= y;i++) {
        //printf("I = %d e Imod13 = %d\n", i, (i%13));
        if(i%13 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
