#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, a;
    i = 1;
    for(a = 0;a < 5;a++) {
        
        printf("I=%d J=7\n", i);
        printf("I=%d J=6\n", i);
        printf("I=%d J=5\n", i);
        i += 2;
    }
    return 0;
}
