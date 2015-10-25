#include <stdio.h>
#include <string.h>
#include <algorithm>

#define max (500)

using namespace std;

int main() {
    int t, n, m, a[max], b[max], dis[max][max], dp[max][max];
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &n, &m);
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        sort(a, a + n);
        sort(b, b + m);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dis[i][j] = abs(a[i] - b[j]);
            }
        }
        for(int i = 0; i < n; i++) {
            dp[i][i] = dis[i][i];
            if (i)
                dp[i][i] += dp[i - 1][i - 1];
        }
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < m; j++) {
                dp[i][j] = min(dp[i - 1][j - 1] + dis[i][j], dp[i][j - 1]);
            }
        }
        printf("%d\n", dp[n - 1][m - 1]);
    }
    return 0;
}
