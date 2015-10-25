#include <stdio.h>
int equal(int* a, int n) {
  int i;
  for (i = 1; i < n; i++) {
    if (a[i] != a[i - 1])return 0;
  }
  return 1;
}
int main() {
  int n, r, i;
  while(scanf("%d", &n) && n) {
    int a[n], b[n];
    for (i = 0; i < n; i++) {
      scanf("%d",&a[i]);
    }
    r = 0;
    while (!equal(a, n)) {
      for (i = 0; i < n; i++)b[i] = a[i] / 2;
      a[0] = a[0] / 2 + b[n - 1];
      for (i = 1; i < n; i++)a[i] = a[i] / 2 + b[i - 1];
      for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0)a[i]++;
      }
      r++;
    }
    printf("%d %d\n", r, a[0]);
  }
  system("pause");
  return 0;
}
