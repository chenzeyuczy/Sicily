#include <iostream>
#include <set>
#include <string>

using namespace std;

void convert(string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
    }
}

int main() {
    int n, m;
    string str;
    while (cin >> n && n) {
        cin >> m;
        set<string> name, send;
        for (int i = 0; i < n; i++) {
            cin >> str;
            convert(str);
            name.insert(str);
        }
        for (int i = 0; i < m; i++) {
            cin >> str;
            convert(str);
            if (name.find(str) != name.end())
                send.insert(str);
        }
        cout << name.size() - send.size() << endl;
    }
    return 0;
}
