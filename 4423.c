#include <stdio.h>

#define MAX_BIT (20)

int main() {
    long long t, n, i, j, bit[MAX_BIT], num, sum;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);
        for (i = 0; i < MAX_BIT; i++) {
            bit[i] = 0;
        }
        for (i = 0; i < n; i++) {
            scanf("%lld", &num);
            for (j = 0; num; j++) {
                if (num & 1) {
                    bit[j]++;
                }
                num >>= 1;
            }
        }
        sum = 0;
        for (i = 0; i < MAX_BIT; i++) {
            sum += (bit[i] * (n - bit[i])) << i;
        }
        printf("%lld\n", sum);
    }
    return 0;
}