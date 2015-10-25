#include <iostream>
#include <deque>
#include <string.h>
#include <algorithm>

using namespace std;

struct dir {
    int x, y;
    dir(int X = 0, int Y = 0) : x(X), y(Y) {}
};

dir next[8] = {
    dir(1, 2), dir(1, -2), dir(-1, 2), dir(-1, -2),
    dir(2, 1), dir(2, -1), dir(-2, 1), dir(-2, -1)
};

bool visit[64], finish;
deque<int> path;

deque<int> search(int n) {
    int x, y, nx, ny, value;
    deque<int> pos;
    x = n % 8;
    y = n / 8;
    for (int i = 0; i < 8; i++) {
        nx = x + next[i].x;
        ny = y + next[i].y;
        if (nx < 0 || nx > 7 || ny < 0 || ny > 7)
            continue;
        value = nx + ny * 8;
        if (!visit[value])
            pos.push_back(value);
    }
    return pos;
}

bool cmp(int a, int b) {
    return search(a).size() < search(b).size();
}

void dfs(int n) {
    deque<int>::iterator it;
    visit[n] = true;
    path.push_back(n);
    if (path.size() == 64) {
        finish = true;
        return;
    }
    deque<int> child = search(n);
    sort(child.begin(), child.end(), cmp);
    for (it = child.begin(); it != child.end() && !finish; it++) {
        dfs(*it);
    }
    if (finish)
        return;
    path.pop_back();
    visit[n] = false;
}

int main() {
    int n;
    deque<int>::iterator it;
    while (cin >> n) {
        if (n == -1)
            break;
        memset(visit, false, sizeof(visit));
        finish = false;
        path.clear();
        dfs(--n);
        for (it = path.begin(); it != path.end(); it++) {
            if (it != path.begin())
                cout << " ";
            cout << *it + 1;
        }
        cout << endl;
    }
    return 0;
}
