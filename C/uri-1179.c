#include <stdio.h>
#include <stdlib.h>

int main() {
    int par[5];
    int impar[5];
    int i, j, x, p, imp;
    
    p = 0;
    imp = 0;
    for(i = 0; i < 15; i++) {
        scanf("%d", &x);
        if(x%2 == 0) {
            par[p] = x;
            p++;
        } else {
            impar[imp] = x;
            imp++;
        }
        if(p == 5) {
            for(j = 0;j < p;j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            p = 0;
        } else if(imp == 5) {
            for(j = 0;j < imp;j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            imp = 0;
        }
    }
    
    for(j = 0;j < imp;j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for(j = 0;j < p;j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
    
    return 0;
}
