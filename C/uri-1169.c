#include <stdio.h>
#include <math.h>

int main () {
    unsigned long long n, x, i, j, total, gramas, kilos, p;
    
    scanf("%llu", &n);
    
    for(j = 0; j < n; j++) {
        total = 0;
        gramas = 0;
        kilos = 0;
        scanf("%llu", &x);
        
        for(i = 0; i < x; i++) {
            
            p = pow(2, i);
            //printf("%u\n", p);
            
            total = total + p;
            //printf("%u\n", total);
           
            
        }
        
        gramas = total/12;
        kilos = gramas/1000;
        
        printf("%llu kg\n", kilos);
    }
    
    return 0;
}
