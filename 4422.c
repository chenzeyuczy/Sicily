#include <stdio.h>

int main() {
    int t, n, m, j, left, right, loc, i, dis, step;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        left = 1;
        right = m;
        dis = 0;
        scanf("%d", &j);
        for (i = 0; i < j; i++) {
            scanf("%d" , &loc);
            if (loc >= left && loc <= right)
                continue;
            else if (loc < left) {
                step = left - loc;
                left = loc;
                right -= step;
            } else if (loc > right) {
                step = loc - right;
                left += step;
                right = loc;
            }
            dis += step;
        }
        printf("%d\n", dis);
    }
    return 0;
}
