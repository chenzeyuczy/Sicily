#include <stdio.h>

int main() {
	int t, n[3], i;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &n[0], &n[1], &n[2]);
		for (i = 0; i < 3; i++) {
			if (n[i] == n[(i + 1) % 3] + n[(i + 2) % 3]) {
				break;
			}
		}
		if (i == 0) {
			printf("%d + %d = %d\n", n[1], n[2], n[0]);
		} else if (i == 1) {
			printf("%d + %d = %d\n", n[0], n[2], n[1]);
		} else if (i == 2) {
			printf("%d + %d = %d\n", n[0], n[1], n[2]);
		} else {
			printf("%d %d %d NO SUM\n", n[0], n[1], n[2]);
		}
	}
	return 0;
}