#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, j, soma;
    
    while(1) {
        soma = 0;
        j = 0;
        scanf("%d", &x);
        if(x == 0) {
            exit(0);
        }
        
        do {
            if(x%2 ==0) {
                soma += x;
                j++;
            }
            x++;
        } while(j < 5);
        
        printf("%d\n", soma);
    }
    
    return 0;
}
