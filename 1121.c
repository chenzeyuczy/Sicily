#include <stdio.h>

int main() {
  int i, s[31] = {1, 0, 3};
  for (i = 4; i < 31; i += 2) {
    s[i] = 4 * s[i - 2] - s[i - 4];
  }
  while (scanf("%d", &i) && i != -1) {
    printf("%d\n", s[i]);
  }
  return 0;
}
