#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0, j, month;
    double invest[12], left, right, mean, total, sum;
    while (scanf("%d", &n) && n != -1) {
        for (j = 0; j < 12; j++)
            invest[j] = 0;
        left = 0;
        right = 1;
        for (j = 0; j < n; j++) {
            scanf("%d", &month);
            scanf("%lf", &invest[month - 1]);
        }
        scanf("%d%lf", &month, &total);
        while (right - left > 0.000001) {
            mean = (left + right) / 2;
            sum = 0;
            for (j = 0; j < month; j++) {
                sum += invest[j] * pow(1 + mean, month - j);
            }
            if (sum > total) {
                right = mean;
            } else {
                left = mean;
            }
        }
        if (i)
            printf("\n");
        printf("Case %d: %.5lf\n", ++i, left);
    }
    return 0;
}
