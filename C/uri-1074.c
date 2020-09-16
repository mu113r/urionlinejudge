#include <stdio.h>

int main () {
    int n, i;
    long long int x;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++) {
        scanf("%lli", &x);
        
        if(x==0) {
            printf("NULL\n");
        }
        if(x>0) {
            if(x%2==0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("ODD POSITIVE\n");
            }
        }
        if(x<0) {
            if(x%2==0) {
                printf("EVEN NEGATIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    
    return 0;
}
