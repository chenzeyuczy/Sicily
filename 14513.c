#include <stdio.h>
#include <string.h>

int main() {
	char s1[1001], s2[1001];
	while (scanf("%s%s", s1, s2) != EOF) {
		if (strlen(s1) >= strlen(s2)) {
			printf("go\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}