#include <iostream>
#include <set>

using namespace std;

int main() {
    int max, now, len, *removal, counter, value, policy, first;
    char cmd;
    multiset<int> list;
    multiset<int>::iterator it;
    first = 1;
    while (cin >> max) {
        cin >> len;
        list.clear();
        removal = new int[len];
        counter = now = 0;
        policy = 1;
        if (!first)
            cout << endl;
        else
            first = 0;
        for (int i = 0; i < len; i++)
            cin >> removal[i];
        while (cin >> cmd && cmd != 'e') {
            if (cmd == 'a') {
                cin >> value;
                if (value <= max)
                    list.insert(value);
            }
            else if (cmd == 'p') {
                cin >> value;
                policy = value;
            } else {
                if (list.empty())
                    value = -1;
                else if (policy == 1) {
                    it = list.begin();
                    value = *it;
                    list.erase(it);
                } else {
                    it = list.end();
                    value = *(--it);
                    list.erase(it);
                }
                if (now < len && ++counter == removal[now]) {
                    cout << value << endl;
                    now++;
                }
            }
        }
        delete[] removal;
    }
    return 0;
}
