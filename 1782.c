#include <stdio.h>
#include <string.h>

int max(int a, int b) { return a > b ? a : b; }

int main() {
    int t, n, m, cost, vol[10001], i, j;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        memset(vol, 0, sizeof(vol));
        for (i = 0; i < n; i++) {
            scanf("%d", &cost);
            for (j = m; j >= cost; j--) {
                vol[j] = max(vol[j], vol[j - cost] + cost);
            }
        }
        printf("%d\n", vol[m]);
    }
    return 0;
}

