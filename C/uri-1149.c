#include <stdio.h>

int main () {
    int a, n, i, soma;
    
    while(scanf("%d %d", &a, &n) != EOF) {
        soma = 0;
        while(n <= 0) {
                scanf("%d", &n);
        }
        for(i = a;i < a+n;i++) {
            soma += i;
        }
        printf("%d\n", soma);
    }
    
    return 0;
}
