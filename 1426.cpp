#include <iostream>
#include <string>
using namespace std;
struct dictree {
    dictree *child[10];
    int n;
    dictree() {
        for (int i = 0; i < 10; i++)
            child[i] = NULL;
        n = 0;
    }
    ~dictree() {
        for (int i = 0; i < 10; i++)
            child[i] = NULL;
    }
};
int main() {
    int t, n, l, i;
    string s;
    bool flag;
    cin >> t;
    while (t--) {
        dictree *root = new dictree, *current;
        cin >> n;
        flag = true;
        while (n--) {
            cin >> s;
            if (!flag) continue;
            l = s.length();
            current = root;
            for (i = 0; i < l; i++) {
				current->n = -1;
                if (current->child[s[i] - '0'] == NULL)
                    current->child[s[i] - '0'] = new dictree;
                current = current->child[s[i] - '0'];
                if (current->n > 0) {
                    flag = false;
                    break;
                }
            }
			if (current->n != 0)
				flag = false;
            else current->n++;
        }
        cout << (flag ? "YES" : "NO") << endl;
        delete root;
    }
    return 0;
}