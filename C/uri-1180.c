#include <stdio.h>

int main () {
    int menor, pos, i, n, x, c;
    
    menor = 99999;
    c = 0;
    scanf("%d", &n);
    
    for(i = 0;i < n;i++) {
        scanf("%d", &x);
        if(x < menor) {
            menor = x;
            pos = c;
        }
        c++;
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}
