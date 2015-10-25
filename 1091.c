#include <stdio.h>

#define MAX (50000)

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int t, n, Max, temp, arr[MAX], dp1[MAX], dp2[MAX];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (i == 0) {
                dp1[i] = arr[i];
            } else {
                dp1[i] = max(dp1[i - 1] + arr[i], arr[i]);
            }
        }
        for (int i = n - 1; i > 0; i--) {
            if (i == n - 1) {
                dp2[i] = arr[i];
                temp = dp2[i];
                Max = dp1[i - 1] + temp;
            } else {
                dp2[i] = max(dp2[i + 1] + arr[i], arr[i]);
                temp = max(dp2[i], temp);
                Max = max(dp1[i - 1] + temp, Max);
            }
        }
        printf("%d\n", Max);
    }
    return 0;
}
