#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, i, *pos, loc1, loc2;
	stack<int> couple;
	while(cin >> n) {
		if (n == 0)
			break;
		while (!couple.empty())
			couple.pop();
		pos = new int[n * 2 + 1];
		for (i = 0; i < n; i++) {
			cin >> loc1 >> loc2;
			pos[loc1 - 1] = pos[loc2 - 1] = i;
		}
		for (i = 0; i < 2 * n; i++) {
			if (!couple.empty() && (couple.top() == pos[i]))
				couple.pop();
			else
				couple.push(pos[i]);
		}
		if (couple.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		delete []pos;
	}
	return 0;
}