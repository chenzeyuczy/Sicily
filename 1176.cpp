#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int dp[1000][1000];

int main() {
    int n, *num, i, j, count = 0;
    while (cin >> n) {
        if (n == 0)
            break;
        num = new int[n];
        for (i = 0; i < n; i++) {
            cin >> num[i];
        }
        for (i = 0; i < n / 2; i++) {
            for (j = 0; j + 2 * i + 1 < n; j++) {
                int k = j + 2 * i + 1;
                if (i) {
                    int p1, p2;
                    if (num[j + 1] >= num[k]) {
                        p1 = num[j] - num[j + 1] + dp[j + 2][k];
                    } else {
                        p1 = num[j] - num[k] + dp[j + 1][k - 1];
                    }  // Player 1 choose the left one.
                    if (num[j] >= num[k - 1]) {
                        p2 = num[k] - num[j] + dp[j + 1][k - 1];
                    } else {
                        p2 = num[k] - num[k - 1] + dp[j][k - 2];
                    }  // Player 1 choose the right one.
                    dp[j][k] = max(p1, p2);
                } else {
                    dp[j][j + 1] = abs(num[j] - num[j + 1]);
                }
            }
        }
        cout << "In game " << ++count 
             << ", the greedy strategy might lose by as many as " 
             << dp[0][n - 1] << " points." << endl;
        delete[] num;
    }
    return 0;
}
