#include <stdio.h>
#include <math.h>
#include <algorithm>

typedef struct {
    double x, y;
} pos;

bool cmp(pos a, pos b) {
    return a.x < b.x;
}

pos solve(pos a, pos b) {
    double x1, x2, y1, y2, dis, angle, a1, a2;
    pos target;
    x1 = a.x;
    y1 = a.y;
    x2 = b.x;
    y2 = b.y;
    dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
    a1 = atan((y2 - y1) / (x2 - x1));
    a2 = acos(dis / 2);
    angle = a1 + a2;
    target.x = x1 + 2 * cos(angle);
    target.y = y1 + 2 * sin(angle);
    return target;
}

int main() {
    int n, j;
    pos ele[11];
    while (scanf("%d", &n) && n) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &ele[j].x);
            ele[j].y = 1;
        }
        std::sort(ele, ele + n, cmp);
        while (--n) {
            for (j = 0; j < n; j++)
                ele[j] = solve(ele[j], ele[j + 1]);
        }
        printf("%.4lf %.4lf\n", ele[0].x, ele[0].y);
    }
    return 0;
}
