#include <stdio.h>

int main () {
    int x, z, c, soma;
    
    scanf("%d", &x);
    soma = 0;
    c = 0;
    
    do {
        scanf("%d", &z);
    } while(x >= z);
    
    do {
        soma += x;
        x++;
        c++;
    } while(soma <= z);
    
    printf("%d\n", c);
    
    return 0;
}
