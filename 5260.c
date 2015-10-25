#include <stdio.h>
#include <string.h>

#define MAX (30)

int main() {
    char map[MAX][MAX], a[MAX], b[MAX];
    int i, j, p1, p2, l1, l2;
    scanf("%s%s", a, b);
    l1 = strlen(a);
    l2 = strlen(b);
    p1 = p2 = -1;
    for (i = 0; i < l2; i++) {
        for (j = 0; j < l1; j++) {
            map[i][j] = '.';
        }
    }
    for (i = 0; i < l1; i++) {
        if (p1 >= 0)
            break;
        for (j = 0; j < l2; j++) {
            if (a[i] == b[j]) {
                p1 = i;
                p2 = j;
                break;
            }
        }
    }
    for (i = 0; i < l1; i++) {
        map[p2][i] = a[i];
    }
    for (j = 0; j < l2; j++) {
        map[j][p1] = b[j];
    }
    for (i = 0; i < l2; i++) {
        for (j = 0; j < l1; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}

