#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int n, i, q, coelho, sapo, rato;
    char t; //(t)ipo de animal (coelho, rato, sapo)
    coelho = 0;
    sapo = 0;
    rato = 0;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%d %c", &q, &t);
        if(t == 'c' || t == 'C') {
            coelho = coelho + q;
        } else if(t == 'r' || t == 'R') {
            rato = rato + q;
        } else if(t == 's' || t == 'S') {
            sapo = sapo + q;
        }
    }
    
    printf("Total: %d cobaias\n", sapo+rato+coelho);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", (double)coelho/((double)coelho+(double)rato+(double)sapo)*100);
    printf("Percentual de ratos: %.2lf %%\n", (double)rato/((double)coelho+(double)rato+(double)sapo)*100);
    printf("Percentual de sapos: %.2lf %%\n", (double)sapo/((double)coelho+(double)rato+(double)sapo)*100);
    
    return 0;
}
