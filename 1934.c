#include <stdio.h>
#include <malloc.h>

struct node {
    int front, back;
};

int main() {
    int t, n, c, i, head, tem, pos1, pos2, dir, x, y;
    node *pos;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &c);
        pos = (node*)malloc(sizeof(node)* n);
        for (i = 0; i < n; i++) {
            pos[i].front = pos[i].back = -1;
            if (i) {
                pos[i].front = i - 1;
                pos[i - 1].back = i;
            }
        }
        head = 0;
        for (i = 0; i < c; i++) {
            scanf("%d%d%d", &dir, &x, &y);
            x--;
            y--;
            pos1 = pos[x].front;
            pos2 = pos[x].back;
            if (pos1 >= 0) {
                pos[pos1].back = pos2;
            }
            else {
                head = pos2;
            }
            if (pos2 >= 0) {
                pos[pos2].front = pos1;
            }
            if (dir == 1) {
                tem = pos[y].front;
                if (tem >= 0) {
                    pos[tem].back = x;
                }
                else {
                    head = x;
                }
                pos[x].front = tem;
                pos[x].back = y;
                pos[y].front = x;
            }
            else {
                tem = pos[y].back;
                if (tem >= 0) {
                    pos[tem].front = x;
                }
                pos[x].front = y;
                pos[x].back = tem;
                pos[y].back = x;
            }
        }
        tem = head;
        for (i = 0; i < n; i++) {
            printf("%d ", tem + 1);
            tem = pos[tem].back;
        }
        printf("\n");
        free(pos);
    }
    return 0;
}