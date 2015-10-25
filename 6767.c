#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n, l, i;
	char s[1001];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		l = strlen(s);
		if (s[l / 2 - 1] == s[l / 2])printf("Do-it\n");
		else printf("Do-it-Not\n");
		for (i = 0; i < l; i++)s[i] = '\0';
	}
	system("pause");
	return 0;
}