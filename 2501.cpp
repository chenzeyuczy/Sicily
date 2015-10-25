#include <stdio.h>
int main() {
  int n, k, i, s = 0, tem = 1, digit = 9901, *p = new int[9901];
  scanf("%d %d", &n, &k);
  p[0] = 0;
  for (i = 1; i < digit; i++) {
    tem *= n;
    tem %= digit;
    s += tem;
    s %= digit;
    p[i] = s;
  }
  printf("%d\n", (p[digit - 1] * k / (digit - 1) + p[k % (digit - 1)]) % digit);
  delete []p;
  return 0;
}         