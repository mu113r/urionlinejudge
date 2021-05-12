#include <stdio.h>

int main () {
    int i, n, person, start_time, end_time, total_time;
    while(1) {
        start_time = 0;
        end_time = 0;
        total_time = 0;
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        for(i = 0;i < n;i++) {
            scanf("%d", &person);
            if(person > end_time) {
                total_time = total_time + (end_time - start_time);
                start_time = person;
                end_time = person + 10;
            } else {
                end_time = person + 10;
            }
        }
        total_time = total_time + (end_time - start_time);
        printf("%d\n", total_time);
    }

    return 0;
}
