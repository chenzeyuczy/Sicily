#include <stdio.h>

int main() {
    int x, y, n;
    double price, min;
    scanf("%d%d", &x, &y);
    min = (double)x / y;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &x, &y);
        price = (double)x / y;
        if (min > price)
            min = price;
    }
    price = min * 1000;
    printf("%.2lf\n", price);;
    return 0;
}
