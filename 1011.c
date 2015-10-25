#include <stdio.h>

int main() {
    int t, n, m, i, j, k, l;
    unsigned long long dp[2001], sum;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d", &n, &m);
        sum = 0;
        for (j = 1; j <= m; j++)
            dp[j] = 1;
        for (l = 1; l < n; l++) {
            for (j = m; j > 0; j--) {
                dp[j] = 0;
                for (k = 1; k <= j / 2; k++)
                    dp[j] += dp[k];
            }
        }
        for (j = 1; j <= m; j++)
            sum += dp[j];
        printf("Case %d: n = %d, m = %d, # lists = %llu\n", i + 1, n, m, sum);
    }
    return 0;
} 
