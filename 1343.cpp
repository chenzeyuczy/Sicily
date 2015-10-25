#include <stdio.h>
bool end(const char* str, int s, int t, int w) {
	for (int i = 0; i < w; i++) {
		if (str[i] < t - w + i + 'a')
			return false;
	}
	return true;
}
bool valid(const char* str, int s, int t, int w) {
	for (int i = 0; i < w; i++) {
		if (str[i] < 'a' + s  + i - 1 || str[i] > 'a' + t - w + i)
			return false;
		if (i > 0) {
			if (str[i] <= str[i - 1])
				return false;
		}
	}
	return true;
}
void addone(char* str, int s, int t, int w, int p) {
	str[p]++;
	for (int i = p + 1; i < w; i++)
		str[i] = str[i - 1] + 1;
	if (!valid(str, s, t, w))
		addone(str, s, t, w, p - 1);
}
void add(char* str, int s, int t, int w) {
	addone(str, s, t, w, w - 1);
}
int main() {
	int s, t, w, i;
	while (scanf("%d %d %d", &s, &t, &w) != EOF) {
		char *str = new char[w + 1];
		scanf("%s", str);
		for (i = 0; i < 5; i++) {
			if (end(str, s, t, w))
				break;
			add(str, s, t, w);
			printf("%s\n", str);
		}
		delete []str;
	}
	return 0;
}