#include <iostream>
using namespace std;
int main() {
	int t, m, *c, *v, *s, i, j;
	cin >> t >> m;
	c = new int[m];
	v = new int[m];
	s = new int[t + 1];
	for (i = 0; i < m; i++)
		cin >> c[i] >> v[i];
	for (i = 0; i <= t; i++)
		s[i] = 0;
	for (i = 0; i < m; i++) {
		for (j = t; j >= c[i]; j--) {
			s[j] = max(s[j], s[j - c[i]] + v[i]);
		}
	}
	cout << s[t] << endl;
	delete []c;
	delete []v;
	delete []s;
	system("pause");
	return 0;
}