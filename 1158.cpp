#include <iostream>

using namespace std;

const int MAX_SIZE = 10;
int cost[MAX_SIZE][MAX_SIZE], m, n, best, score;

void dfs(int x, int y) {
    if (x < 0 || y < 0 || x >= m || y >= n) {
        return;
    }
    score += cost[x][y];
    if (x == m - 1 && y == n - 1) {
        if (score > 0 && (best < 0 || score < best)) {
            best = score;
        }
    }
    dfs(x + 1, y);
    dfs(x, y + 1);
    score -= cost[x][y];
}

int main() {
    while (cin >> m >> n) {
        best = -1;
        score = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> cost[i][j];
            }
        }
        dfs(0, 0);
        cout << (best > 0 ? best : -1) << endl;
    }
    return 0;
}