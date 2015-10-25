#include <iostream>
#include <stack>
using namespace std;
struct tree {
	char key;
	bool exist, isRoot, visit;
	tree *left, *right;
	tree() {
		left = right = NULL;
		exist = isRoot = visit = false;
	}
};
void insert(tree *list, int i, char c, int l, int r) {
	list[i].key = c;
	if (!list[i].visit)
		list[i].isRoot = true;
	list[i].visit = list[i].exist = true;
	if (l) {
		list[i].left = &list[l];
		list[l].isRoot = false;
		list[l].visit = true;
	}
	if (r) {
		list[i].right = &list[r];
		list[r].isRoot = false;
		list[r].visit = true;
	}
}
void visit(tree *root) {
	tree *current;
	stack<tree*> list;
	if (root)
		list.push(root);
	while (!list.empty()) {
		current = list.top();
		list.pop();
		if (current->exist = true)
			cout << current->key;
		if (current->right)
			list.push(current->right);
		if (current->left)
			list.push(current->left);
	}
	cout << endl;
}
int find(tree *list) {
	for (int i = 0; i < 1002; i++) {
		if (list[i].isRoot)
			return i;
	}
}
int main() {
	int n, i, l, r;
	char c;
	tree *root;
	while (cin >> n) {
		tree *list = new tree[1002];
		while (n--) {
			cin >> i >> c >> l >> r;
			insert(list, i, c, l, r);
		}
		root = &list[find(list)];
		visit(root);
		delete []list;
	}
	system("pause");
	return 0;
}