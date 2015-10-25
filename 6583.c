#include <stdio.h>
#include <string.h>
int main() {
  int a, b, c = 0, i, p;
  char o[9];
  while (scanf("%d %s %d",&a,o,&b)) {
    if (o[0] == 'E')break;
    if (strcmp(o, "<") == 0)p = (a < b) ? 1 : 0;
    else if (strcmp(o, ">") == 0)p = (a > b) ? 1 : 0;
    else if (strcmp(o, "<=") == 0)p = (a <= b) ? 1 : 0;
    else if (strcmp(o, ">=") == 0)p = (a >= b) ? 1 : 0;
    else if (strcmp(o, "==") == 0)p = (a == b) ? 1 : 0;
    else if (strcmp(o, "!=") == 0)p = (a != b) ? 1 : 0;
    printf("Case %d: ",++c);
    if (p) printf("true\n");
    else printf("false\n");
    for (i = 0; i < 9; i++)o[i] = '\0';
  }
  system("pause");
  return 0;
}
