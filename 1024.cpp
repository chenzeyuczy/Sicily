#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct edge {
    int terminal, distance;
    edge(int t = 0, int d = 0) {
        terminal = t;
        distance = d;
    }
};

vector<edge> *data;
bool *visit;
int maxDis;

void dfs(int node, int dis) {
    if (visit[node])
        return;
    visit[node] = true;
    if (dis > maxDis)
        maxDis = dis;
    for (int i = 0; i < data[node].size(); i++) {
        int tem = data[node][i].terminal;
            dis += data[node][i].distance;
            dfs(tem, dis);
            dis -= data[node][i].distance;
    }
    visit[node] = false;
}

int main() {
    int n, k, x, y, d;
    edge tem;
    while (cin >> n >> k) {
        data = new vector<edge>[n];
        visit = new bool[n];
        maxDis = 0;
        memset(visit, false, sizeof(bool) * n);
        for (int i = 0; i < n - 1; i++) {
            cin >> x >> y >> d;
            data[x - 1].push_back(edge(y - 1, d));
            data[y - 1].push_back(edge(x - 1, d));
        }
        dfs(k - 1, 0);
        cout << maxDis << endl;
        delete[] data;
        delete[] visit;
    }
    return 0;
}
