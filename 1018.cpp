#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct card {
    int order, value, suit;
    card(const string& str = "AC") {
        int len = str.length();
        if (str[0] == 'A') {
            value = 0;
        } else if (str[0] > '1' && str[0] <= '9') {
            value = str[0] - '0' - 1;
        } else if (str[0] == '1') {
            value = 9;
        } else if (str[0] == 'J') {
            value = 10;
        } else if (str[0] == 'Q') {
            value = 11;
        } else if (str[0] == 'K') {
            value = 12;
        }
        order = value * 4;
        switch (str[len - 1]) {
            case 'C':
                suit = 0;
                break;
            case 'D':
                suit = 1;
                break;
            case 'H':
                suit = 2;
                break;
            case 'S':
                suit = 3;
                break;
        }
        order += suit;
    }
    bool operator<(const card& other) {return order < other.order;}
    friend ostream& operator<<(ostream& out, const card& instance);
};

bool cmp(const card& a, const card& b) {
    return a.order < b.order;
}

ostream& operator<<(ostream& out, const card& instance) {
    switch (instance.value) {
        case 0:
            out << 'A';
            break;
        case 9:
            out << "10";
            break;
        case 10:
            out << 'J';
            break;
        case 11:
            out << 'Q';
            break;
        case 12:
            out << 'K';
            break;
        default:
            out << char('1' + instance.value);
    }
    switch (instance.suit) {
        case 0:
            out << 'C';
            break;
        case 1:
            out << 'D';
            break;
        case 2:
            out << 'H';
            break;
        case 3:
            out << 'S';
            break;
    }
    return out;
}

card data[5];

bool success() {
    if (data[0].suit!= data[1].suit)
        return false;
    int min = 2, target = data[1].value, first = 1;
    for (int i = 3; i < 5; i++) {
        if (data[i].order < data[min].order)
            min = i;
    }
    target += min - 1;
    for (int j = 2; j < 5; j++) {
        if (j != min) {
            first = j;
            break;
        }
    }
    if (data[9 - min - first].order < data[first].order)
        target += 3;
    target %= 13;
    return target == data[0].value;
}

int main() {
    int t;
    string tem;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> tem;
            data[j] = card(tem);
        }
        sort(data, data + 5, cmp);
        do {
            if (success()) {
                cout << "Problem " << i << ":";
                for (int j = 0; j < 5; j++) {
                    cout << " " << data[j];
                }
                cout << endl;
                break;
            }
        } while (next_permutation(data, data + 5));
    }
    return 0;
}
