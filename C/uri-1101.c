#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, m, n, aux, soma;
    
    while(1) {
        soma = 0;
        scanf("%d %d", &m, &n);
        if(m < 1 || n < 1) {
            exit(0);
        }
        if(m>n) {
            aux = m;
            m = n;
            n = aux;
        }
        
        for(i = m;i <=n;i++) {
            soma += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", soma);
    }
    
    return 0;
}
