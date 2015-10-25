#include <stdio.h>

int main() {
    int t, n, m, i, j, min[100], max[100], tem;
    double score[100];
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (i = 0; i < m; i++) {
            scanf("%lf", &score[i]);
            min[i] = max[i] = score[i];
        }
        for (i = 1; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &tem);
                score[j] += tem;
                if (min[j] > tem)
                    min[j] = tem;
                if (max[j] < tem)
                    max[j] = tem;
            }
        }
        for (i = 0; i < m; i++)
            printf("%.2lf\n", (score[i] - min[i] - max[i]) / (n - 2));
    }
    return 0;
}
