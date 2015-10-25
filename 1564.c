#include <stdio.h>

int main() {
    int dp[101] = {1}, max = 101, i, j;
    for (i = 5; i < max; i++) {
        for (j = i; j < max; j++)
            dp[j] += dp[j - i];
    }
    scanf("%d", &max);
    printf("%d\n", dp[max]);
    return 0;
}
