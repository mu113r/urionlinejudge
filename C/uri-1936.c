#include <stdio.h>

int main () {
    int n, x, i, answer;
    scanf("%d", &n);
    answer = 0;
    while(n != 0) {
        x = 1;
        i = 0;
        while(x <= n) {
            i++;
            x = x * i;
        }
        x = x / i;
        answer++;
        n = n - x;
    }

    printf("%d\n", answer);

    return 0;
}
