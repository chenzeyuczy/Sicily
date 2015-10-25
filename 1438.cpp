#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n, *price, discount, tem, i;
    cin >> t;
    while (t--) {
        cin >> n;
        price = new int[n];
        discount = 0;
        for (i = 0; i < n; i++)
            cin >> price[i];
        sort(price, price + n);
        for (i = n - 3; i >= 0; i -= 3) {
            discount += price[i];
        }
        cout << discount << endl;
        delete[] price;
    }
    return 0;
}
