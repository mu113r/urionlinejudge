#include <stdio.h>

int main () {
    int age, c = 0;
    double media, soma = 0;
    
    while(1) {
        scanf("%d", &age);
        if(age < 0) {
            break;
        }
        soma += age;
        c++;
    }
    
    media = soma / c;
    printf("%.2lf\n", media);
    
    return 0;
}
