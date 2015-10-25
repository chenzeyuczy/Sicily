#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(const string& a, const string& b) {
    return a + b < b + a;
}

int main() {
    int t, n;
    string *data;
    cin >> t;
    while (t--) {
        cin >> n;
        data = new string[n];
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
        sort(data, data + n, cmp);
        for (int i = 0; i < n; i++) {
            cout << data[i];
        }
        cout << endl;
        delete[] data;
    }
    return 0;
}
