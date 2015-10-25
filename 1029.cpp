#include <iostream>
#include <string>

using namespace std;

string add(const string& a, const string& b) {
    int l1, l2, l, i, carry, num;
    string target, tem;
    l1 = a.size();
    l2 = b.size();
    carry = 0;
    for (i = 0; i < l1 || i < l2; i++) {
        num = carry;
        if (l1 - i > 0)
            num += a[l1 - i - 1] - '0';
        if (l2 - i > 0)
            num += b[l2 - i - 1] - '0';
        if (num > 9) {
            num -= 10;
            carry = 1;
        } else {
            carry = 0;
        }
        tem = string(1, '0' + num);
        target = tem + target;
    }
    if (carry)
        target = "1" + target;
    return target;
}

int main() {
    int m, d;
    string *scale, result, tem;
    while (cin >> m >> d && m * d) {
        scale = new string[m];
        result = scale[0] = "1";
        for (int i = 1; i < m; i++)
            scale[i] = "0";
        for (int i = 0; i < d; i++) {
            tem = scale[0];
            result = add(tem, result);
            scale[0] = add(scale[0], (m > 1) ? scale[1] : tem);
            for (int j = 1; j < m - 1; j++) {
                scale[j] = scale[j + 1];
            }
            if (m > 1)
                scale[m - 1] = tem;
        }
        cout << result << endl;
        delete[] scale;
    }
    return 0;
}
