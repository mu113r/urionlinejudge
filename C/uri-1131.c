#include <stdio.h>
#include <stdlib.h>

int main () {
    int inter, gremio, draw = 0;
    int a, c1 = 0, c2 = 0, cg = 0;
    while(1) {
        scanf("%d %d", &inter, &gremio);
        cg++;
        if(inter > gremio) {
            c1++;
        } else if(inter < gremio) {
            c2++;
        } else {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &a);
        if(a == 2) {
            break;
        }
        
    }
    
    printf("%d grenais\n", cg);
    printf("Inter:%d\n", c1);
    printf("Gremio:%d\n", c2);
    printf("Empates:%d\n", draw);
    if(c1 > c2) {
        printf("Inter venceu mais\n");
    } else if(c1 < c2) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }
    
    return 0;
}
