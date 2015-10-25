#include <iostream>
#include <queue>

#define max (10)

using namespace std;

queue<int> list[max];
bool flag[max];
int count[max];

int main() {
    int t, p, i, j, tem[max], ncCount;
    bool change, accomplish;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> p;
        for (j = 0; j < p; j++) {
            flag[j] = true;
            count[j] = 13;
            tem[j] = 0;
            while (!list[j].empty())
                list[j].pop();
        }
        for (j = 0; j < 52; j++) {
            cin >> tem[0];
            list[0].push(tem[0]);
        }
        tem[0] = ncCount = 0;
        change = accomplish = false;
        while (ncCount < 13 *52 && !accomplish) {
            accomplish = true;
            change = false;
            for (j = 0; j < p; j++) {
                if (list[j].empty()) {
                    continue;
                }
                accomplish = false;
                count[j] = count[j] % 13 + 1;
                tem[j] = list[j].front();
                list[j].pop();
                if (tem[j] != count[j]) {
                    list[j].push(tem[j]);
                    tem[j] = 0;
                } else {
                    change = true;
                }
            }
            for (j = 1; j < p; j++) {
                if (tem[j - 1]) {
                    list[j].push(tem[j - 1]);
                    flag[j] = true;
                    tem[j - 1] = 0;
                }
            }
            if (change)
                ncCount = 0;
            else
                ncCount++;
        }
        if (accomplish) {
            cout << "Case " << i << ":";
            for (j = 0; j < p; j++)
                cout << " " << count[j];
            cout << endl;
        } else {
            cout << "Case " << i << ": unwinnable" << endl;
        }
    }
    return 0;
}
