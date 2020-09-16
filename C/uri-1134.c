#include <stdio.h>
#include <stdlib.h>

int main () {
    int d, alc, gas, dis;
    
    alc = 0;
    gas = 0;
    dis = 0;
    
    while(1) {
        scanf("%d", &d);
        if(d == 1) {
            alc++;
        } else if(d == 2) {
            gas++;
        } else if(d == 3) {
            dis++;
        } else if(d == 4) {
            break;
        }
        
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", dis);
    
    return 0;
}
