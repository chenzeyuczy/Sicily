#include <stdio.h>
#include <math.h>

int main() {
    int n, m, a, c;
    // c = b - a;
    scanf("%d%d", &n, &m);
    // (2 * a + c) * (c + 1) = 2 * m
    for (c = sqrt(2 * m); c >= 0; c--) {
        if (2 * m % (c + 1) == 0 && (2 * m / (c + 1) - c) % 2 == 0) {
            a = (2 * m / (c + 1) - c) / 2;
            if (a > 0 && a + c <= n)
                printf("[%d,%d]\n", a, a + c);
        }
    }
    return 0;
}

