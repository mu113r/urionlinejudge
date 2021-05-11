#include <stdio.h>

int main () {
    int i, n;
    scanf("%d", &n);
    int current[n];
    for(i = 0;i < n;i++) {
        scanf("%d", &current[i]);
    }

    while(n > 1) {
        n--;
        for(i = 0;i < n;i++) {
            if(current[i] == current[i+1]) {
                current[i] = 1;
            } else {
                current[i] = -1;
            }
        }
    }

    if(current[0] == -1) {
        printf("branca\n");
    }else {
        printf("preta\n");
    }

    return 0;
}
