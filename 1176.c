#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {return a > b ? a : b;}

int main() {
    int n, *num, *dp, i, j, count = 0;
    while (scanf("%d", &n) != EOF) {
        if (n == 0)
            break;
        num = (int*)malloc(sizeof(int) * n);
        dp = (int*)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        for (i = 0; i < n / 2; i++) {
            for (j = 0; j + 2 * i + 1 < n; j++) {
                int k = j + 2 * i + 1;
                if (i) {
                    int p1, p2;
                    if (num[j + 1] >= num[k]) {
                        p1 = num[j] - num[j + 1] + dp[j + 2];
                    } else {
                        p1 = num[j] - num[k] + dp[j + 1];
                    } // Player 1 choose the left one.
                    if (num[j] >= num[k - 1]) {
                        p2 = num[k] - num[j] + dp[j + 1];
                    } else {
                        p2 = num[k] - num[k - 1] + dp[j];
                    } // Player 1 choose the right one.
                    dp[j] = max(p1, p2);
                } else {
                    dp[j] = abs(num[j] - num[j + 1]);
                }
            }
        }
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n", ++count, dp[0]);
        free(num);
        free(dp);
    }
    return 0;
}
