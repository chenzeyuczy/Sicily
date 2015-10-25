#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int valid(char tem, char pre) {
	if (tem > '9' || tem <= '0')
		return 0;
	if (tem == '1')
		return 1;
	if (tem == '2') {
		if (pre < '7')
			return 1;
	}
	return 0;
}
int zero(char tem) {
	return (tem == '0') ? 1 : 0;
}
int count(char *s, int l) {
	int i, n1 = 1, n2 = 1, c;
	if (l == 1)
		return 1;
	for (i = 1; i < l; i++) {
		if (zero(s[i])) {
			c = n2;
		} else {
			c = n1;
			if (valid(s[i - 1], s[i]))
				c += n2;
		}
		n2 = n1;
		n1 = c;
	}
	return c;
}
int main() {
	int l, c;
	char s[10000];
	while (gets(s)) {
		l = strlen(s);
		if (s[0] == '0')
			break;
		c = count(s, l);
		printf("%d\n", c);
		for (int i = 0; i < l; i++)
			s[i] = '\0';
	}
	system("pause");
	return 0;
}