#include <stdio.h>
#include <string.h>

int convert(char* n, int m) {
    int l = strlen(n), sum = 0, i;
    for (i = 0; i < l; i++) {
        sum *= m;
        if (n[i] >= '0' && n[i] <= '9')
            sum += n[i] - '0';
        else
            sum += n[i] - 'A' + 10;
    }
    return sum;
}

char* reverse(int n, int m) {
    int num[40], l = 0, i;
    if (n) {
        while (n) {
            num[l++] = n % m;
            n /= m;
        }
    } else
        num[l++] = 0;
    char *s = (char*)malloc(sizeof(char) * (l + 1));
    for (i = 0; i < l; i++) {
        if (num[l - i - 1] < 10)
            s[i] = num[l - i - 1] + '0';
        else
            s[i] = num[l - i - 1] + 'A' - 10;
    }
    s[l] = '\0';
    return s;
}

int main() {
    int t, m, n1, n2;
    char a[40], b[40], *p, *q;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%s%s", &m, a, b);
        n1 = convert(a, m);
        n2 = convert(b, m);
        p = reverse(n1 / n2, m);
        q = reverse(n1 % n2, m);
        printf("%s\n%s\n", p, q);
    }
    return 0;
}
