#include <stdio.h>

int main() {
    
    int x, y, i;
    scanf("%d %d", &x, &y);
    
    if(x > y) {
        i = y + 1;
        for( ;i < x; i++) {
            if(i%5 == 2 || i%5 == 3) {
                printf("%d\n", i);
            }
        }
    } else {
        i = x + 1;
        for( ;i < y; i++) {
            if(i%5 == 2 || i%5 == 3) {
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
}
