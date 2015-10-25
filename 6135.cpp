#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, max, sum;
    cin >> n >> m;
    int *data = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    sort(data, data + n);
    for (int i = 0; i < n - 2; i++) {
        if (data[i] > m)
            break;
        for (int j = i + 1; j < n - 1; j++) {
            if (data[i] + data[j] > m)
                break;
            for (int l = j + 1; l < n; l++) {
                sum = data[i] + data[j] + data[l];
                if (sum > m)
                    break;
                else if (sum > max)
                    max = sum;
            }
        }
    }
    cout << max << endl;
    delete[] data;
    return 0;
}
