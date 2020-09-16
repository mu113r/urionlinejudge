#include <stdio.h>
#include <stdlib.h>

int main () {
    double a, b, valida, validb, med;
    
    valida = 0;
    validb = 0;
    
    while(1) {
        scanf("%lf", &a);
        if(a >= 0 && a <= 10) {
            valida = 1;
        } else {
            printf("nota invalida\n");
        }
        if(valida == 1) {
            break;
        }
    }
    while(1) {
        scanf("%lf", &b);
        if(b >= 0 && b <= 10) {
            validb = 1;
        } else {
            printf("nota invalida\n");
        }
        if(validb == 1) {
            break;
        }
    }
    
    med = (a + b)/2;
    printf("media = %.2lf\n", med);
    
    return 0;
}
