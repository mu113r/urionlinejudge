#include <stdio.h>

int main()
{
    int r1, r2, rt, n, i;
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++)
    {
        scanf("%d %d", &r1, &r2);
        rt = r1 + r2;
        printf("%d\n", rt);
    }
    
    return 0;
}
