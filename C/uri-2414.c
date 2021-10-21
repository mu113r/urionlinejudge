#include <stdio.h>

int main () {
    int num, higher;
    higher = 0;
    do {
        scanf("%d", &num);
        if(num > higher) {
            higher = num;
        }
    } while (num != 0);
    printf("%d\n", higher);

    return 0;
}
