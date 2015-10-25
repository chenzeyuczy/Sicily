#include <stdio.h>

int main() {
	int n1, n2, n3, d;
	while (scanf("%d%d%d", &n1, &n2, &n3) != EOF) {
		if (n1 == 0 && n2 == 0 && n3 == 0)
			break;
		if (n2 - n1 == n3 - n2) {
			d = n2 - n1;
			printf("AP %d\n", n3 + d);
		} else {
			d = n3 / n2;
			printf("GP %d\n", n3 * d);
		}
	}
	return 0;
}