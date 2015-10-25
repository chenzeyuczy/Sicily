#include <stdio.h>
#include <string.h>

int main() {
    int t, n1, n2, l, i;
    char a[1001], b[1001];
    scanf("%d", &t);
    while (t--) {
        scanf("%s%s", a, b);
        if (strcmp(a, b) != 0) {
            printf("NO\n");
            continue;
        }
        l = strlen(a);
        n1 = n2 = 0;
        for (i = 0; i < l; i += 2)
            n1 += a[i] - '0';
        for (i = 1; i < l; i += 2)
            n2 += a[i] - '0';
        printf("%s\n", ((n1 - n2) % 11 == 0 ? "YES" : "NO"));
    }
    return 0;
}
