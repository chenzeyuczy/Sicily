#include <stdio.h>

#define max (60001)

int main() {
    int t, n, num[max], i, j;
    for (i = 0; i < max; i++)
        num[i] = 4;
    for (i = 0; i * i < max; i++)
        num[i * i] = 1;
    for (i = 0; i < max; i++) {
        if (num[i] == 1) {
            for (j = i; i + j < max; j++) {
                if (num[j] < 3 && num[i + j] > 2)
                    num[i + j] = num[i] + num[j];
            }
        }
    }
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", num[n]);
    }
    return 0;
}

