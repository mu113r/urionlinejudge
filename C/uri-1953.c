#include <stdio.h>
#include <string.h>

int main () {
    int n, reg, i, epr, ehd, intrusos;
    char code[20];
    
    while(scanf("%d", &n) == 1) {;
        epr = 0;
        ehd = 0;
        intrusos = 0;
        for(i = 0; i < n; i++) {
            scanf("%d %s", &reg, &*code);
            
            if(strcmp(code, "EPR") == 0 || strcmp(code, "epr") == 0) {
                epr++;
            } else if(strcmp(code, "EHD") == 0 || strcmp(code, "ehd") == 0) {
                ehd++;
            } else {
                intrusos++;
            }   
        }
        
        printf("EPR: %d\n", epr);
        printf("EHD: %d\n", ehd);
        printf("INTRUSOS: %d\n", intrusos);
    
    }
    
    return 0;
}
