#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n, m, *num, i;
    while (scanf("%d%d", &n, &m) != EOF) {
        if (n == 0 && m == 0)
            break;
        num = (int*)malloc(sizeof(int) * (n + 1));
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        qsort(num, n, sizeof(int), cmp);
        for (i = 0; i < n; i += m) {
            if (i)
                printf(" ");
            printf("%d", num[i]);
        }
        printf("\n");
        free(num);
    }
    return 0;
}
