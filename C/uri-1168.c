#include <stdio.h>
#include <string.h>

int main () {
    int i, j, n, a, soma = 0, x;
    char num[120];
    
    scanf("%d", &n);
    getchar();
    
    for(i = 0;i < n;i++) {
        gets(num);
        a = strlen(num);
        soma = 0;
        
        for(j = 0;j < a;j++) {
            x = num[j] - '0';
            
            if(x == 1) {
                soma += 2;
            } else if (x == 2 || x == 3 || x == 5) {
                soma += 5;
            } else if (x == 4) {
                soma += 4;
            } else if (x == 6 || x == 9 || x == 0) {
                soma += 6;
            } else if (x == 7) {
                soma += 3;
            } else if (x == 8) {
                soma += 7;
            }
        }
        
        printf("%d leds\n", soma);
        
        
    }
}
