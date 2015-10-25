#include <stdio.h>
#include <string.h>

int main() {
    int t, n, i;
    char s[10];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        n = 0;
        for (i = 0; i < strlen(s); i++) {
            n *= 7;
            if (s[i] < '2')
                n += s[i] - '0';
            else if (s[i] < '5')
                n += s[i] - '1';
            else if (s[i] < '8')
                n += s[i] - '2';
            else
                n += s[i] - '3';
        }
        printf("%s: %d\n", s, n);
    }
    return 0;
}

