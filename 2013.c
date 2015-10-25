#include <stdio.h>

int main() {
	int i, n, val, money = 0, debt = 0, path, add;
	scanf("%d", &n);
	money = add = path = 0;
	path = n;
	for (i = 0; i < n; i++) {
		scanf("%d", &val);
		money += val;
		if (val > 0) {
			if (money >= 0) {
				path += 2 * add;
				add = debt = 0;
			} else {
				add++;
			}
		} else {
			if (money < 0) {
				add++;
				debt = 1;
			}
		}
	}
	printf("%d\n", path);
	system("pause");
	return 0;
}