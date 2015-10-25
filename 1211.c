#include <stdio.h>
#include <string.h>

int main() {
    int n, m, l, q, i, j, k, x, y, sum;
    int map[100][100][2], path[100][100];
    scanf("%d%d%d", &n, &m, &l);
    memset(map, 0, sizeof(map));
    memset(path, 0, sizeof(path));
    for (i = 0; i < m; i++) {
        scanf("%d%d", &x, &y);
        path[x - 1][y - 1]++;
        map[x - 1][y - 1][0]++;
        map[x - 1][y - 1][1]++;
    }
    while (--l) {
        printf("Round %d:\n", l);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                sum = 0;
                for (k = 0; k < n; k++) {
                    if (path[k][j]) {
                        sum += map[i][k][l % 2];
                    }
                }
                map[i][j][(l + 1) % 2] = sum;
            }
        }
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d%d", &x, &y);
        printf("%d\n", map[--x][--y][0]);
    }
    return 0;
}
