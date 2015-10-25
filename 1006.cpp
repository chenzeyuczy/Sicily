#include <iostream>
#include <string>
#include <algorithm>

#define len 5
#define INF 0xFFFF

using namespace std;

int cmp(string s1, string s2) {
    int pos[len], val = 0;
    for (int i = 0; i < len; i++) {
        pos[s1[i] - 'A'] = i;
    }
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (pos[s2[i] - 'A'] > pos[s2[j] - 'A'])
                val++;
        }
    }
    return val;
}

int main() {
    int n, value, min;
    string *str, best;
    char now[len + 1];
    while (cin >> n) {
        if (n == 0)
            break;
        str = new string[n];
        value = 0;
        min = INF;
        for (int i = 0; i < len; i++)
            now[i] = 'A' + i;
        now[5] = '\0';
        for (int i = 0; i < n; i++)
            cin >> str[i];
        do {
            value = 0;
            for (int i = 0; i < n; i++) {
                value += cmp(now, str[i]);
            }
            if (value < min) {
                min = value;
                best.assign(now, len);
            }
        } while (next_permutation(now, now + len));
        cout << best << " is the median ranking with value "
             << min << "." << endl;
        delete[] str;
    }
    return 0;
}
