#include <iostream>
using namespace std;
int main() {
	int n, m, *v, *p, *s, i, j;
	while (cin  >> n >> m) {
		v = new int[m + 1];
		p = new int[m + 1];
		s = new int[n + 1];
		for (i = 0; i < m; i++) {
			cin >> v[i] >> p[i];
			p[i] *= v[i];
		}
		for (i = 0; i <= n; i++)
			s[i] = 0;
		for (i = 0; i < m; i++) {
			for (j = n; j >= v[i]; j--)
				s[j] = max(s[j], s[j - v[i]] + p[i]);
		}
		cout << s[n] << endl;
		delete []v;
		delete []p;
		delete []s;
	}
	system("pause");
	return 0;
}