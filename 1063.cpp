#include <iostream>
#include <algorithm>

struct node {
    int id, salary, height, boss, subordinate;
};

bool cmp1(const node& a, const node& b) {
    return a.salary < b.salary;
}

bool cmp2(const node& a, const node& b) {
    return a.id < b.id;
}

int main() {
    int t, q, m, i, j, id;
    node *data;
    std::cin >> t;
    while (t--) {
        std::cin >> m >> q;
        data = new node[m];
        for (i = 0; i < m; i++) {
            std::cin >> data[i].id >> data[i].salary >> data[i].height;
            data[i].boss = data[i].subordinate = 0;
        }
        std::sort(data, data + m, cmp1);
        for (i = 0; i < m; i++) {
            for (j = i + 1; j < m; j++) {
                if (data[i].height <= data[j].height) {
                    data[i].boss = data[j].id;
                    data[j].subordinate += data[i].subordinate + 1;
                    break;
                }
            }
        }
        std::sort(data, data + m, cmp2);
        for (i = 0; i < q; i++) {
            int left, right, target;
            std::cin >> id;
            left = 0;
            right = m;
            do {
                target = (left + right) / 2;
                if (data[target].id < id)
                    left = target + 1;
                else
                    right = target - 1;
            } while (data[target].id != id);
            std::cout << data[target].boss << " " << data[target].subordinate << std::endl;
        }
        delete[] data;
    }
    return 0;
}
