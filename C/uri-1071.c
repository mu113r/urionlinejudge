#include <stdio.h>

int main () {
    int x, y, a, b, soma=0, i;
    
    scanf("%d %d", &x, &y);
    a = x > y ? y:x; //a recebe o menor
    b = x > y ? x:y; //b recebe o maior
    
    for(i=a+1;i<b;i++) {
        if(i%2!=0) {
            soma = soma + i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
