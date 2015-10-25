#include <stdio.h>

#define INF (0xffff)

int main() {
    int t, n, m, i, j, k, visit[200], path[200][200], dis[200], next, min;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                path[i][j] = INF;
            }
            path[i][i] = visit[i] = 0;
        }
        while (m--) {
            scanf("%d%d%d", &i, &j, &k);
            if (path[--i][--j] > k)
                path[i][j] = path[j][i] = k;
        }
        for (i = 0; i < n; i++) {
            dis[i] = path[0][i];
        }
        visit[0] = next = 1;
        for (i = 0; i < n - 1 && next; i++) {
            min = INF, next = 0;
            for (j = 1; j < n; j++) {
                if (!visit[j] && dis[j] < min) {
                    next = j;
                    min = dis[j];
                }
            }
            visit[next] = 1;
            for (j = 0; j < n; j++) {
                if (!visit[j] && dis[next] + path[j][next] < dis[j])
                    dis[j] = dis[next] + path[j][next];
            }
        }
        printf("%d\n", (dis[n - 1] >= INF ? -1 : dis[n - 1]));
    }
    return 0;
}
