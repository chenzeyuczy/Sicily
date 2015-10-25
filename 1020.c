#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculate(int *src, int *des, char* num, int pos) {
    int l = strlen(num), tem = 0, i;
    for (i = 0; i < l; i++) {
        tem *= 10;
        tem += num[i] - '0';
        tem %= src[pos];
    }
    des[pos] = tem;
}

int main() {
    int t, n, *num, *remainder, i;
    char vli[401];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        num = (int*)malloc(sizeof(int) * n);
        remainder = (int*)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        scanf("%s", vli);
        for (i = 0; i < n; i++) {
            calculate(num, remainder, vli, i);
        }
        printf("(");
        for (i = 0; i < n; i++) {
            if (i)
                printf(",");
            printf("%d", remainder[i]);
        }
        printf(")\n");
        free(num);
        free(remainder);
    }
    return 0;
}
