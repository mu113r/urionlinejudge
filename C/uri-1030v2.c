#include <stdio.h>
#include <stdlib.h>

int main(){
  int nc, n, k, i, j, z, ncopy, kcopy, vez;
  scanf("%d", &nc);
  vez = 0;
  for(i = 0;i < nc;i++){
    vez++;
    scanf("%d %d", &n, &k);
    //printf("n = %d, k = %d\n", n, k);
    int arr[n];
    ncopy = n;
    for(j = 0;j < n;j++){
      arr[j] = 1;
    }
    j = 0;
    while(ncopy > 1){
      kcopy = k;
      while(kcopy > 0){
        //printf("kcopy = %d ncopy = %d\n", kcopy, ncopy);
        //printf("j = %d arr[j] = %d\n", j, arr[j]);
        if(arr[j] == 1){
          kcopy--;
        }
        j++;
        if(j == n && kcopy != 0){
          j = 0;
        }
      }
      arr[j-1] = -1;
      ncopy--;
      if(j == n){
        j = 0;
      }
    }
    for(z = 0;z < n;z++){
      //printf("%d ", arr[i]);
      if(arr[z] == 1){
        printf("Case %d: %d\n", vez, z+1);
      }
    }
    //printf("\n");
  }
  return 0;
}
