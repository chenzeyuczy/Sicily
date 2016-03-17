#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum;
    scanf("%d", &n);
    for (i = 100; i < n; i++) {
        sum = pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3);
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
