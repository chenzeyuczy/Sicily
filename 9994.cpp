#include <iostream>
#include <set>

using namespace std;

class record {
    public:
        int num, time;
        record(int a, int b): num(a), time(b) {}
        bool operator<(const record& other) const {
            return time < other.time || (time == other.time && num > other.num);
        }
};

int main() {
    int t, m, i, j, k, time, sum;
    set<record> data;
    set<record>::reverse_iterator it;
    cin >> t; 
    for (i = 0; i < t; i++) {
        cin >> m;
        for (j = 0; j < m; j++) {
            sum = 0;
            for (k = 0; k < 7; k++) {
                cin >> time;
                sum += time;
            }
            data.insert(record(j, sum));
        }
        cout << "test case " << i + 1 << ":" << endl;
        for (it = data.rbegin(); it != data.rend(); it++) {
            cout << "Employee " << it->num << ": " << it->time << endl;;
        }
        data.clear();
    }
    return 0;
}
