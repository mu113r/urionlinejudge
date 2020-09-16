#include<stdio.h>

int josephus(int n,int k);

int main()
{
    int nc,n,k,i;
    scanf("%d",&nc)
    for(i=1;i<=tcase;i++){
        scanf("%d %d",&n,&k);
        int resp=josephus(n,k);
        printf("Case %d: %d\n",i,resp);
    }
      }
      return 0;
}
int josephus(int n,int k)
{
    if(n==1)
        return 1;
    else
        return (josephus(n-1,k)+k-1)%n+1;
}
