#include <stdio.h>
#include <string.h>
int main() {
  int i, l;
  char n[1001];
  int a[1001], b[1010];
  scanf("%s",n);
  l = strlen(n);
  if (l == 1 && n[0] == '0')printf("0\n");
  else {
  b[0] = b[1] = 0;
  for (i = 0; i < l; i++) {
    if (n[l - i - 1] == '0')a[i] = 0;
    else a[i] = 1;
    b[i + 4] = a[i];
  }
  for (i = 0; i < l; i++) {
    b[i] += a[i];
    if (b[i] > 1) {
      b[i] -= 2;
      b[i + 1]++;
    }
  }
  while(b[i] > 1) {
    b[i] = 0;
    b[++i]++;
  }
  if (b[l + 3] == 1)l += 4;
  else l += 5;
  for (i = 0; i< l; i++)printf("%d",b[l - i - 1]);
  printf("\n");
  }
  system("pause");
  return 0;
}
