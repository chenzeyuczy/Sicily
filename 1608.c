#include <stdio.h>

int main() {
    int t, n, count[10], tem, i;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < 10; i++)
            count[i] = 0;
        do {
            tem = n;
            while (tem) {
                count[tem % 10]++;
                tem /= 10;
            }
        } while (n--)
        for (i = 0; i < 10; i++) {
            if (i)
                printf(" ");
            printf("%d", count[i]);
        }
        printf("\n");
    }
    return 0;
}
