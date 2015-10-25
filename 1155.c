#include <stdio.h>
#include <string.h>

#define MAX (200)

int main() {
    int n, m, access[MAX][MAX], i, a, b;
    while (scanf("%d", &n) && n) {
        scanf("%d", &m);
        memset(access, 0, sizeof(access));
        while (m--) {
            scanf("%d%d", &a, &b);
            access[a][b] = 1;
            for (i = 0; i < n; i++) {
                if (access[i][a])
                    access[i][b] = 1;
            }
        }
        if (access[0][n - 1]) {
            printf("I can post the letter\n");
        } else {
            printf("I can't post the letter\n");
        }
    }
    return 0;
}

