#include <stdio.h>
int main() {
    int n, m, i, j;
    int s[31][31];
    while (scanf("%d %d", &n, &m) != EOF) {
		for (i = 0; i <= m; i++) {
			for (j = 0; j < n; j++)s[i][j] = 0;
		}
		s[0][0] = 1;
        for (i = 1; i <= m; i++) {
            for (j = 0; j < n; j++) {
				if (j == 0)s[i][j] = s[i - 1][n - 1] + s[i - 1][1];
                else s[i][j] = s[i - 1][(j - 1) % n] + s[i - 1][(j + 1) % n];
            }
        }
        printf("%d\n", s[m][0]);
    }
    system("pause");
    return 0;
}
