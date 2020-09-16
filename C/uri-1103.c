#include <stdio.h>

int main () {
    int h1, m1, h2, m2, ht, mt, total;
    
    while(1) {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }
                
        ht = h2 - h1;
        mt = m2 - m1;
        
        if(mt < 0) {
            ht = ht - 1;
            mt = mt + 60;
        }
        
        if(ht < 0) {
            ht = ht + 24;
        }
        
        total = mt + ht*60;
        
        printf("%d\n", total);
        
    }
    
    return 0;
}
