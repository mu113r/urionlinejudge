#include <stdio.h>
#include <stdlib.h>

int main(){
  while(1){
    int n, i, j, ncopy, m, mcopy, found, x, z, index;
    scanf("%d", &n);
    if(n == 0){
      break;
    }
    int arr[n];
    for(i = 0;i < n;i++){
      arr[i] = 1;
    }
    ncopy = n;
    m = 1;
    mcopy = 1;
    found = 1;
    while(found){
      j = 0;
      arr[0] = -1;
      ncopy--;
      while(ncopy > 1){
        mcopy = m;
        while(mcopy > 0){
          //printf("j = %d arr[j] = %d mcopy = %d\n", j, arr[j], mcopy);
          if(arr[j] == 1){
            mcopy--;
          }
          j++;
          if(j == n && mcopy != 0){
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
        if(arr[z] == 1){
          index = z;
        }
      }
      if(index == 12){
        found = 0;
      }
      m++;
      for(x = 0;x < n;x++){
        arr[x] = 1;
      }
      ncopy = n;
    }
    printf("%d\n", m-1);
  }
  return 0;
}
