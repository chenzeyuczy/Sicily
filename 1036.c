#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transform(char *key, int n, int *order) {
    int *visit, *sequence, i, j, min, pos;
    visit = (int *)malloc(sizeof(int) * n);
    sequence = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        visit[i] = 0;
    }
    for (i = 0; i < n; i++) {
        pos = -1;
        min = 300;
        for (j = 0; j < n; j++) {
            if (visit[j])
                continue;
            if (pos < 0 || key[j] < min) {
                pos = j;
                min = key[j];
            }
        }
        visit[pos] = 1;
        sequence[i] = pos;
    }
    for (i = 0; i < n; i++) {
        order[sequence[i]] = i;
    }
    free(visit);
    free(sequence);
}

int main() {
    char key[11], content[101];
    int len, i, j, row, col, *se;
    while (scanf("%s", key)) {
        if (strcmp(key, "THEEND") == 0)
            break;
        scanf("%s", content);
        len = strlen(content);
        col = strlen(key);
        row = len / col;
        se = (int*)malloc(sizeof(int) * col);
        transform(key, col, se);
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("%c", content[i + se[j] * row]);
            }
        }
        printf("\n");
        free(se);
    }
    return 0;
}
