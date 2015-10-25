#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int mod2(const string& num) {
    int len = num.size();
    return (num[len - 1] - '0') % 2;
}

string div2(const string& num) {
    int len = num.size(), buf = 0, tem, flag = 0;
    string result = "";
    for (int i = 0; i < len; i++) {
        tem = buf * 10 + num[i] - '0';
        buf = tem % 2;
        if (tem / 2 == 0 && !flag)
            continue;
        else
            flag = 1;
        result += tem / 2 + '0';
    }
    if (result.size() == 0)
        result = "0";
    return result;
}

int main() {
    int t, i, num;
    string p;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> p;
        num = 1;
        while (mod2(p) == 0) {
            num++;
            p = div2(p);
        }
        cout << "Case " << i << ": " << num << endl;
        if (i != t)
            cout << endl;
    }
    return 0;
}
