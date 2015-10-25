#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int t, n, m, score;
	string name;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		map<string, int> list;
		while (n--) {
			cin >> name >> score;
			list[name] = score;
		}
		while (m--) {
			cin >> name;
			score = list[name];
			if (score > 100 || score < 0)
				printf("Score is error!\n");
			else if (score < 60)
				printf("E\n");
			else if (score < 70)
				printf("D\n");
			else if (score < 80)
				printf("C\n");
			else if (score < 90)
				printf("B\n");
			else
				printf("A\n");
		}
	}
	return 0;
}