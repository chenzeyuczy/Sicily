#include <stdio.h>
int main() {
    int t, n, i, a[10], m;
    char p, s[10];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < 10; i++) {
            a[i] = 0;
            s[i] = '\0';
        }
        for (i = 0; i < n; i++) {
            scanf("%d %c %s", &m, &p, s);
            if (s[0] == 'A')a[p - 'A'] = 1;
            else {
                if (a[p - 'A'] == 0)a[p - 'A'] = 2;
            }
        }
        printf("Accept: ");
        for (i = 0; i < 10; i++) {
            if (a[i] == 1) {
                printf("%c", 'A' + i);
            }
        }
        printf("\n");
        printf("Wrong: ");
        for (i = 0; i < 10; i++) {
            if (a[i] == 2) {
                printf("%c", 'A' + i);
            }
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}
