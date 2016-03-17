#include <stdio.h>

#define eps (1e-6)

int isZero(double x) {
    return (x > -eps && x < eps) ? 1 : 0;
}

int main() {
    int t;
    double x1, x2, x3, y1, y2, y3, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        if (isZero(x3 - x1)) {
            x = (y1 - y2) * (y3 - y2) / (x3 - x2) + x1;
            y = y2;
        } else if (isZero(x3 - x2)) {
            x = (y2 - y1) * (y3 - y1) / (x3 - x1) + x2;
            y = y1;
        } else if (isZero(y3 - y1)) {
            x = x2;
            y = (x1 - x2) * (x3 - x2) / (y3 - y2) + y1;
        } else if (isZero(y3 - y2)) {
            x = x1;
            y = (x2 - x1) * (x3 - x1) / (y3 - y1) + y2;
        } else {
            y = ((x1 - x2) * (x3 - x2) * (x3 - x1) + y2 * (y1 - y3) * (x3 - x2) + y1 * (y3 - y2) * (x3 - x1)) / ((y1 - y3) * (x3 - x2) + (y3 - y2) * (x3 - x1));
            x = -(y - y1) * (y3 - y2) / (x3 - x2) + x1;
        }
        printf("%.4lf %.4lf\n", x, y);
    }
    return 0;
}