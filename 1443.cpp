#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t, count, temp, pos;
    queue<int> q;
    priority_queue<int> pri;
    cin >> t;
    while (t--) {
        while (!q.empty())
            q.pop();
        while (!pri.empty())
            pri.pop();
        cin >> count >> pos;
        for (int i = 0; i < count; i++) {
            cin >> temp;
            q.push(temp);
            pri.push(temp);
        }
        count = 0;
        while (pos != -1) {
            if (q.front() == pri.top()) {
                q.pop();
                pri.pop();
                count++;
                pos--;
            } else {
                q.push(q.front());
                q.pop();
                pos--;
               if (pos == -1)
                  pos = pri.size() - 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
