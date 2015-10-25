#include <stdio.h>
#include <string.h>

int main() {
    int t, sum[82], l1, l2, i, j, count;
    char n1[81], n2[81];
    scanf("%d", &t);
    for (j = 1; j <= t; j++) {
        scanf("%s%s", n1, n2);
        l1 = strlen(n1);
        l2 = strlen(n2);
        memset(sum, 0, sizeof(sum));
        for (i = 0; i < l1; i++)
            sum[i] = (n1[l1 - i - 1] == '1') ? 1 : 0;
        for (i = 0; i < l2; i++) {
            sum[i] += (n2[l2 - i - 1] == '1') ? 1 : 0;
            if (sum[i] > 1) {
                sum[i] %= 2;
                sum[i + 1]++;
            }
        }
        while (sum[i] > 1) {
            sum[i] %= 2;
            sum[++i]++;
        }
        count = 1;
        for (i = 81; i >= 0; i--) {
            if (sum[i] > 0) {
                count = i + 1;
                break;
            }
        }
        printf("%d ", j);
        for (i = count - 1; i >= 0; i--)
            printf("%d", sum[i]);
        printf("\n");
    }
    return 0;
}

