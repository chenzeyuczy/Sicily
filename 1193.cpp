#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n, b, f, step[1000], level, hold, reminder, ans;
    cin >> t;
    while (t--) {
        cin >> n >> f >> b;
        for (int i = 0; i < n; i++) {
            cin >> level >> hold;
            if (hold)
                step[i] = 3 * f - level;
            else
                step[i] = f + level;
        }
        sort(step, step + n);
        reminder = b % n;
        if (reminder == 0)
            ans = (b / n - 1) * 2 * f + step[n - 1];
        else
            ans = b / n * 2 * f + step[reminder - 1];
        cout << ans << endl;
    }
    return 0;
}

