#include <stdio.h>

int main() {
  int a, b, c, d, e, result;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  result = a*300 + b*1500 + c*600 + d*1000 + e*150 + 225;
  printf("%d\n", result);
  return 0;
}
