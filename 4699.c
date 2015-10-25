#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, i, j, k, tem, h[10000] = {0};
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		tem = k % m;
		if (h[tem] == 0) {
			h[tem] = k;
		} else {
			for (j = 0; j < n; j++) {
				if (h[(tem + j) % m] == 0) {
					h[(tem + j) % m] = k;
					if (k == 0)
						h[(tem + j) % m] = -1;
					break;
				}
			}
		}
	}
	for (i = 0; i < m; i++) {
		printf("%d#", i);
		if (h[i] == 0)
			printf("NULL");
		else if (h[i] == -1)
			printf("0");
		else
			printf("%d", h[i]);
		printf("\n");
	}
	system("pause");
	return 0;
}