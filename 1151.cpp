#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

struct node {
    int value;
    string path;
    node(int v = 2740140, const string& p = "") {
        value = v;
        path = p;
    }
};

int arrayToNum(int *arr) {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        sum <<= 3;
        sum += arr[i];
    }
    return sum;
}

int opA(int num) {
    int n1, n2;
    n1 = (num & 0x000fff) << 12;
    n2 = (num & 0xfff000) >> 12;
    return n1 | n2;
}

int opB(int num) {
    int n1, n2;
    n1 = (num & 0xff8ff8) >> 3;
    n2 = (num & 0x007007) << 9;
    return n1 | n2;
}

int opC(int num) {
    int n1, n2, n3, n4;
    n1 = (num & 0x1c0000) >> 3;
    n2 = (num & 0x038000) >> 12;
    n3 = (num & 0x0001c0) << 12;
    n4 = (num & 0x000038) << 3;
    num &= 0xe07e07;
    return num | n1 | n2 | n3 | n4;
}

int main() {
    int step, state, target, length, num, data[8];
    node tem;
    set<int> visit;
    queue<node> route;
    while(cin >> step) {
        if (step == -1)
            break;
        visit.clear();
        while (!route.empty())
            route.pop();
        for (int i = 0; i < 8; i++) {
            cin >> data[i];
            data[i]--;
        }
        target = arrayToNum(data);
        for (int i = 0; i < 4; i++) {
            data[i] = i;
            data[7 - i] = 4 + i;
        }
        state = arrayToNum(data);
        visit.insert(state);
        tem.value = state;
        tem.path = "";
        route.push(tem);
        while (!route.empty()) {
            tem = route.front();
            route.pop();
            state = tem.value;
            length = tem.path.length();
            if (length > step)
                break;
            if (state == target)
                break;
            num = opA(state);
            if (visit.find(num) == visit.end()) {
                visit.insert(num);
                route.push(node(num, tem.path + "A"));
            }
            num = opB(state);
            if (visit.find(num) == visit.end()) {
                visit.insert(num);
                route.push(node(num, tem.path + "B"));
            }
            num = opC(state);
            if (visit.find(num) == visit.end()) {
                visit.insert(num);
                route.push(node(num, tem.path + "C"));
            }
        }
        if (state == target && length <= step) {
            cout << length << " " << tem.path << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

