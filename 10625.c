#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main() {
	int n, i, letter[26], flag;
	char surname[31];
	flag = 0;
	memset(letter, 0, sizeof(letter));
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", surname);
		letter[surname[0] - 'a']++;
	}
	for (i = 0; i < 26; i++) {
		if (letter[i] > 4) {
			flag = 1;
			printf("%c", i + 'a');
		}
	}
	if (!flag)
		printf("PREDAJA");
	printf("\n");
	system("pause");
	return 0;
}