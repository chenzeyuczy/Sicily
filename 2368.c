#include <stdio.h>

int main() {
	int p, n, l = 40, counter[8], sum, i;
	char dice;
	scanf("%d", &p);
	while (p--) {
		scanf("%d ", &n);
		sum = 0;
		for (i = 0; i < 8; i++) {
			counter[i] = 0;
		}
		for (i = 0; i < l; i++) {
			scanf("%c", &dice);
			sum &= 3;
			sum <<= 1;
			if (dice == 'H') {
				sum += 1;
			}
			if (i > 1) {
				counter[sum]++;	
			}
		}
		printf("%d", n);
		for (i = 0; i < 8; i++) {
			printf(" %d", counter[i]);
		}
		printf("\n");
	}
	return 0;
}