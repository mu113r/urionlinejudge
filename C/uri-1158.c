#include <stdio.h>

int main () {
    int n, x, y, i, j, soma;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        soma = 0;
        j = 0;
        scanf("%d %d", &x, &y);
        
        do {
            if(x%2 !=0) {
                soma += x;
                j++;
            }
            x++;
        } while(j < y);
        
        printf("%d\n", soma);
    }
    
    return 0;
}
