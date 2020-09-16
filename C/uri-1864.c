#include <stdio.h>

int main() {
    int n, i;
    char *padrao = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("%c", padrao[i]);
    }
    
    printf("\n");
            
    return 0;
}
