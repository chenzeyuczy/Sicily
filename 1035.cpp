#include <iostream>
#include <string>
#include <map>

using namespace std;

string match(const string& dna) {
    int l = dna.length();
    string target;
    char ch;
    for (int i = 0; i < l; i++) {
        switch (dna[i]) {
            case 'A':
                ch = 'T';
                break;
            case 'T':
                ch = 'A';
                break;
            case 'C':
                ch = 'G';
                break;
            case 'G':
                ch = 'C';
                break;
        }
        target += ch;
    }
    return target;
}

int main() {
    int t, n, counter;
    string str, des;
    map<string, int> count;
    cin >> t;
    while (t--) {
        count.clear();
        cin >> n;
        counter = 0;
        while (n--) {
            cin >> str;
            des = match(str);
            if (count.find(des) == count.end() || count[des] == 0) {
                if (count.find(str) == count.end())
                    count[str] = 0;
                count[str]++;
            } else {
                count[des]--;
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}

