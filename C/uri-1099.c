#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, n, x, y, soma, aux;
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++) {
        soma = 0;
        scanf("%d %d", &x, &y);
        if(x>y) {
            aux = x;
            x = y;
            y = aux;
        }
        for(j = x+1;j < y;j++) {
            if(j%2 != 0) {
                soma = soma + j;
            } 
        }
        printf("%d\n", soma);
    }
    
    return 0;
}
