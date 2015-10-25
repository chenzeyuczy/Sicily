#include <iostream>
#include <set>
#include <string>

using namespace std;

string& toLower(string& s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] -= 'A' - 'a';
    }
    return s;
}

int main() {
    int t, n, m;
    string name;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        set<string> list;
        set<string>::iterator it;
        while (n--) {
            cin >> name;
            list.insert(toLower(name));
        }
        while (m--) {
            cin >> name;
            it = list.find(toLower(name));
            if (it != list.end())
                list.erase(it);
        }
        cout << list.size() << endl;
    }
    return 0;
}

