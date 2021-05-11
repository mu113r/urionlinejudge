#include <stdio.h>

int main () { 
    int i, n, weight;
    float price, final_price;

    final_price = 999999999.0;
    scanf("%d", &n);
    for(i = 0;i < n;i++) {
        scanf("%f %d", &price, &weight);
        price = (1000.0 / (float)weight) * price;
        if(price < final_price) {
            final_price = price;
        }
    }
    printf("%.2f\n", final_price);

    return 0;
}
