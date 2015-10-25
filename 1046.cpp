#include <iostream>
#include <set>

using namespace std;

struct record {
    int first, last, sum, length;
    double average;
};

bool operator < (const record& left, const record& right) {
    if (left.average != right.average)
        return left.average > right.average;
    if (left.length != right.length)
        return left.length > right.length;
    return left.last < right.last;
}

int main() {
    int run, q, r, m, i, j, k, total;
    set<record> data;
    set<record>::iterator it;
    record tem;
    cin >> run;
    for (i = 0; i < run; i++) {
        cin >> q >> r >> m;
        data.clear();
        int *num = new int[q];
        total = 0;
        for (j = 0; j< q; j++) {
            cin >> num[j];
        }
        for (j = 0; j + m <= q; j++ ) {
            total = 0;
            for (k = 0; j + k < q; k++) {
                total += num[j + k];
                tem.first = j + 1;
                if (k >= m - 1) {
                    tem.last = j + k + 1;
                    tem.sum = total;
                    tem.length = k + 1;
                    tem.average = double(total) / tem.length;
                    data.insert(tem);
                }
            }
        }
        cout << "Result for run " << i + 1 << ":" << endl;
        it = data.begin();
        for (j = 0; j < r; j++) {
            if (it == data.end())
                break;
            cout << it->first << "-" << it->last << endl;
            it++;
        }
        delete[] num;
    }
    return 0;
}
