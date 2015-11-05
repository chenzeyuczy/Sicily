#include <stdio.h>

int isHNumber(int n) {
	int i, left, middle, right, diff1, diff2, sum;
	for (i = 0; n; i++) {
		left = middle;
		middle = right;
		right = n % 10;
		n /= 10;
		diff1 = left - right;
		diff2 = right - left;
		sum = left + right;
		if (i < 2) {
			continue;
		} else if (middle != diff1 && middle != diff2 && middle != sum) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n, counter = 0, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (isHNumber(i)) {
			counter++;
		}
	}
	printf("%d\n", counter);
	return 0;
}