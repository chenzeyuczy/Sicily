#include <stdio.h>
#include <string.h>

char s[9], t[9];
int visit[9];

void permutarion(int i, int p, int l) {
    if (visit[i])
        return;
    t[p] = s[i];
    visit[i] = 1;
    if (p + 1 >= l)
        printf("%s\n", t);
    int j;
    for (j = 0; j < l; j++)
        permutarion(j, p + 1, l);
    visit[i] = 0;
}

int main() {
    int i, l;
    scanf("%s", s);
    l = strlen(s);
    memset(visit, 0, sizeof(visit));
    t[l] = '\0';
    for (i = 0; i < l; i++)
        permutarion(i, 0, l);
    return 0;
}

