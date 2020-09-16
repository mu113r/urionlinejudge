#include <stdio.h>
#include <stdlib.h>

int findPrime(int p);

int main(int argc, char const *argv[]) {
  int n, i, primo, vivos, j, z;
  int p[50000];
  p[0] = 2;
  for (j = 1;j < 50000; j++){
    p[j] = findPrime(p[j-1]);
    if(p[j] > 33000){
      break;
    }
  }
  while(1) {
    scanf("%d", &n);
    if(n == 0){
      break;
    }
    int arr[n];
    for(j = 0;j < n;j++){
      arr[j] = 1;
    }
    i = 0;
    z = 0;
    vivos = n;
    while(vivos > 1){
      primo = p[z];
      //printf("primo = %d, i = %d\n", primo, i);
      while(primo > 0) {
        if(arr[i] == 1){
          i++;
          primo--;
        }
        else{
          i++;
        }
        //printf("i = %d, primo = %d\n", i, primo);
        if(i == n && primo > 0){
          i = 0;
        }
      }
      arr[i-1] = -1;
      if(i == n){
        i = 0;
      }
      vivos--;
      z++;
    }
    for(j = 0;j < n;j++){
      if(arr[j] == 1){
        printf("%d\n", j+1);
      }
    }
  }
  return 0;
}

int findPrime(int p){
  int i = 2;
  int isprime;
  if(p < 2){
    return 2;
  }
  do {
    p++;
    isprime = 1;
    for(i = 2;i < p;i++){
      if(p%i == 0){
        isprime = 0;
        break;
      }
    }
  } while(!isprime);
  return p;
}
