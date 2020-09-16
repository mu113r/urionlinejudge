#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i, cidade = 1;
        
    while (1) {
        scanf("%d", &n);
       
        if(n == 0) {
            exit(0);
        }
        
        int x[n];
        int y[n];
        
        for(i = 0;i < n;i++) {
            scanf("%d %d", &x[i], &y[i]);
        }
        
        
        printf("Cidade# %d:\n", cidade);
        printf("\n");
        printf("Consumo medio: %.2lf m3.\n\n", consumoMedio);
        cidade++;
    }
    
    return 0;
}
