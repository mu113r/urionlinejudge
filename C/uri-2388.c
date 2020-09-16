#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, t, v, i, total;
  scanf("%d", &n);
  total = 0;
  for(i = 0;i < n;i++){
    scanf("%d %d", &v, &t);
    total += v*t;
  }
  printf("%d\n", total);
  return 0;
}
