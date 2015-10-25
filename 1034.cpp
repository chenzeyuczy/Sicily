#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main() {
    int n, m, indegree[100], i, j, width, depth, father;
    bool valid, map[100][100], visit[100];
    queue<int> q;
    while (cin >> n >> m && n) {
        memset(map, false, sizeof(map));
        memset(visit, false, sizeof(visit));
        memset(indegree, 0, sizeof(indegree));
        while (!q.empty())
            q.pop();
        while (m--) {
            cin >> i >> j;
            map[--i][--j] = true;
            indegree[j]++;
        }
        for (i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
                visit[i] = true;
            }
        }
        valid = (q.size() != 0);
        depth = width = 0;
        while (valid && !q.empty()) {
            father = q.size();
            if (father > width)
                width = father;
            while (valid && father--) {
                i = q.front();
                for (j = 0; j < n && valid; j++) {
                    if (map[i][j]) {
                        if (visit[j])
                            valid = false;
                        else {
                            q.push(j);
                            visit[j] = true;
                        }
                    }
                }
                q.pop();
            }
            if (!q.empty())
                depth++;
        }
        for (i = 0; i < n; i++) {
            if (!visit[i]) {
                valid = false;
                break;
            }
        }
        if (valid)
            cout << depth << ' ' << width << endl;
        else
            cout << "INVALID" << endl;
    }
    return 0;
}
