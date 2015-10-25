#include <stdio.h>
#include <string.h>

int map[1001][1001];
int row, col;

int judge(int x, int y) {
    if (x <= 0 || x > row)
        return 0;
    if (y <= 0 || y > col)
        return 0;
    if (map[x][y] <= 0) {
        map[x][y] = -1;
        return 1;
    } else
        return 0;
}

void queenArea(int *pos) {
    int x, y, dis;
    x = pos[0], y = pos[1];
    dis = 1;
    while (judge(x - dis, y - dis))
        dis++;
    dis = 1;
    while (judge(x - dis, y))
        dis++;
    dis = 1;
    while (judge(x - dis, y + dis))
        dis++;
    dis = 1;
    while (judge(x, y - dis))
        dis++;
    dis = 1;
    while (judge(x, y + dis))
        dis++;
    dis = 1;
    while (judge(x + dis, y - dis))
        dis++;
    dis = 1;
    while (judge(x + dis, y))
        dis++;
    dis = 1;
    while (judge(x + dis, y + dis))
        dis++;
}

void knightArea(int *pos) {
    int x, y;
    x = pos[0];
    y = pos[1];
    judge(x - 1, y - 2);
    judge(x - 1, y + 2);
    judge(x + 1, y - 2);
    judge(x + 1, y + 2);
    judge(x - 2, y - 1);
    judge(x - 2, y + 1);
    judge(x + 2, y - 1);
    judge(x + 2, y + 1);
}

int main() {
    int queen[101][2], knight[101][2], pawn[101][2];
    int q_num, k_num, p_num, counter, i, j, test = 0;
    while (scanf("%d%d", &row, &col) && row * col) {
        memset(map, 0, sizeof(map));
        counter = 0;
        scanf("%d", &q_num);
        for (i = 0; i < q_num; i++) {
            scanf("%d%d", &queen[i][0], &queen[i][1]);
            map[queen[i][0]][queen[i][1]] = 3;
        }
        scanf("%d", &k_num);
        for (i = 0; i < k_num; i++) {
            scanf("%d%d", &knight[i][0], &knight[i][1]);
            map[knight[i][0]][knight[i][1]] = 2;
        }
        scanf("%d", &p_num);
        for (i = 0; i < p_num; i++) {
            scanf("%d%d", &pawn[i][0], &pawn[i][1]);
            map[pawn[i][0]][pawn[i][1]] = 1;
        }
        for (i = 0; i < q_num; i++) {
            queenArea(queen[i]);
        }
        for (i = 0; i < k_num; i++) {
            knightArea(knight[i]);
        }
        for (i = 1; i <= row; i++) {
            for (j = 1; j <= col; j++) {
                if (map[i][j] == 0)
                    counter++;
            }
        }
        printf("Board %d has %d safe squares.\n", ++test, counter);
    }
    return 0;
}
