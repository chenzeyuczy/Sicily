#include <iostream>

using namespace std;

int main() {
	int n, i, j, *ele, counter;
	bool flag;
	while (cin >> n) {
		ele = new int[n + 1];
		for (i = 0; i < n; i++)
			cin >> ele[i];
		counter = 0;
		for (i = 0; i < n; i++) {
			flag = true;
			for (j = 0; j < i; j++) {
				if (ele[j] > ele[i]) {
					flag = false;
					break;
				}
			}
			for (j = i + 1; j < n; j++) {
				if (ele[j] < ele[i]) {
					flag = false;
					break;
				}
			}
			if (flag)
				counter++;
		}
		cout << counter << endl;
		delete []ele;
	}
	system("pause");
	return 0;
}