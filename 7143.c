#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t, n, x, y, i;
	char s[32];
	scanf("%d", &t);
	while (t--) {
		scanf("%d %s", &n, &s);
		x = y = 0;
		for (i = n - 1; i >= 0; i--) {
			switch (s[n - i - 1]) {
			case '0':
				break;
			case '1':
				y += pow(2, i);
				break;
			case '2':
				x += pow(2, i);
				break;
			case '3':
				x += pow(2, i);
				y += pow(2, i);
				break;
			}
		}
		printf("%d %d\n", x, y);
	}
	system("pause");
	return 0;
}