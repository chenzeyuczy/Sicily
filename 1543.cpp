#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int min, max, i;
	while (cin >> s) {
		min = max = 0;
		for (i = 0; i < s.length(); i++) {
			if (s[i] == '[')
				max++;
			else if (s[i] == ']') {
				max--;
				if (max < min)
					min = max;
			}
		}
		for (i = min; i < 0; i++)
			cout << '[';
		cout << s;
		for (i = max - min; i > 0; i--)
			cout << ']';
		cout << endl;
	}
	system("pause");
	return 0;
}