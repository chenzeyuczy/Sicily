#include <stdio.h>
#include <math.h>

int main() {
    int y, n, b;
    double result;
    while (scanf("%d", &y) && y) {
        b = 4 << ((y - 1960) / 10);
        result = 0;
        n = 1;
        while (result < b) {
            result += log(++n) / log(2);
        }
        printf("%d\n", --n);
    }
    return 0;
}

