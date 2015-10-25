#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int i, j, n, *num, score;
	map<string, int> list;
	string tem;
	cin >> n;
	num = new int[n + 1];
	score = 0;
	for (i = 0; i < n; i++) {
		cin >> tem;
		list.insert(pair<string, int>(tem, i));
	}
	for (i = 0; i < n; i++) {
		cin >> tem;
		num[i] = list[tem];
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (num[i] < num[j])
				score++;
		}
	}
	cout << score << '/' << n * (n - 1) / 2 << endl;
	delete [] num;
	system("pause");
	return 0;
}
		