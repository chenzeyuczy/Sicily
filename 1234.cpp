#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k;
    double r[20], sum;
    bool flag;
    while (cin >> k && k) {
        for (int i = 0; i < k; i++) {
            cin >> r[i];
        }
        sort(r, r + k);
        sum = 0;
        flag = false;
        for (int i = 0; i < k; i++) {
            if (sum >= r[i]) {
                flag = true;
                break;
            }
            sum += r[i];
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
