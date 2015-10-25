#include <stdio.h>
#include <stdlib.h>
int main() {
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF) {
		if (x == 0 && y == 0)break;
		if (x * y == 0) {
			printf("0\n");
			continue;
		}
		while(x * y) {
			if (x > y) x %= y;
			else y %= x;
		}
		printf("%d\n", x + y);
	}
	system("pause");
	return 0;
}