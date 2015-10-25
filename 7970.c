#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
  int i, j, t, l, d, c;
  scanf("%d",&t);
  char s[10001],a[10001];
  while(t--) {
    scanf("%s",s);
    l = strlen(s);
    d = (int)sqrt(l);
    char m[d][d];
    c = 0;
    for (i = 0; i < d; i++) {
      for (j = 0; j < d; j++)m[i][j] = s[c++];
    }
    c = 0;
    for (j = d-1; j >= 0; j--) {
      for (i = 0; i < d; i++)a[c++] = m[i][j];
    }
    for (i = 0; i < l; i++)printf("%c",a[i]);
    printf("\n");
  }
  return 0;
}
