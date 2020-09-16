#include <stdio.h>

int main () {
    double ant, atual, prox;
    int t, x, i, j;
    
    scanf("%d", &t);
    
    for(i = 0;i < t;i++) {
        scanf("%d", &x);
        ant = 0;
        atual = 1;
        prox = ant + atual;
        
        for(j = 1;j <= x;j++) {
            ant = atual;
            atual = prox;
            prox = ant + atual;
        }
        printf("Fib(%d) = %.0lf\n", x, ant);
    }
    
    return 0;
}
