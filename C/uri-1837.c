#include <stdio.h>

int main()
{
    int a, b, q, r;
    // a = b * q + r
    scanf("%d %d", &a, &b);
    
    q = a/b;
    r = a%b;
    
    if(r < 0 && b > 0)
    {
        r = r + b;
        q = (a-r)/b;
    }
    else if(r < 0 && b < 0)
    {
        r = r - b;
        q = (a-r)/b;
    }
    printf("%d %d\n", q, r);
    
    return 0;
}
