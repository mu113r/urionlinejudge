#include <stdio.h>

int main () {
    int i, a, b, c;

    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            break;
        }
        // (a + b + c)/3 = b
        // a + b + c = 3 * b
        // a = 2 * b - c
        c = 2 * a - b;
        printf("%d\n", c);
    }

    return 0;
}
