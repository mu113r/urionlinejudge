#include <stdio.h>

int main () {
    int x, pos=0, neg=0, imp=0, par=0, i;
    
    for(i=0; i<5; i++) {
        scanf("%d", &x);
        
        if(x%2==0) {
            par++;
        } else {
            imp++;
        }
        if(x>0) {
            pos++;
        }
        if(x<0) {
            neg++;
        }
        
    }
    
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
    
}
