#include <stdio.h>

int mdc(int a, int b) {
    int dividendo, divisor, resto;
    
    dividendo = a;
    divisor = b;
    
    while (divisor != 0) {
        resto = dividendo%divisor;
        dividendo = divisor;
        divisor = resto;
    }
    
    return dividendo;
}

int main() {
    int x, y, z, mdc1, pit, aux;
    
    while(scanf("%d %d %d", &x, &y, &z) == 3) {
        //scanf("%d %d %d", &x, &y, &z);

        //printf("%d %d %d\n", x, y, z);
        
        if(x > y) { // troca o x com o y para deixar em ordem crescente.
            aux = x;
            x = y;
            y = aux;
        }
        if(y > z) { // troca o y com o z para deixar em ordem crescente.
            aux = y; 
            y = z;
            z = aux;
        }
        if(x > y) { // verifica se  x e y ainda estao em ordem crescente.
            aux = x; 
            x = y;
            y = aux;
        }
        
        mdc1 = mdc(x, y);
        mdc1 = mdc(mdc1, z);
        
        pit = z*z - x*x - y*y;
        
        if(mdc1 == 1 && pit == 0) {
            printf("tripla pitagorica primitiva\n");
        } else if (pit == 0) {
            printf("tripla pitagorica\n");
        } else {
            printf("tripla\n");
        }
        
        //printf("%d %d %d\n", x, y, z);
        //printf("%d\n", mdc1);
        //printf("%d\n", pit);
    }
    
    return 0;
}
