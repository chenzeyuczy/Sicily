#include <stdio.h>
#include <string.h>

int main() {
    int t, l, num[9], i;
    char n[9];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", n);
        l = strlen(n);
        memset(num, 0, sizeof(num));
        for (i = 0; i < l; i++)
            num[i] = n[l - i - 1] - '0';
        for (i = 0; i < l - 1; i++) {
            if (num[i] > 4)
                num[i + 1]++;
            num[i] = 0;
        }
        if (num[l - 1] > 9) {
            num[l - 1] = 0;
            num[l++]++;
        }
        for (i = l - 1; i >= 0; i--)
            printf("%d", num[i]);
        printf("\n");
    }
    return 0;
}

