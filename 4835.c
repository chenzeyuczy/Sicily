#include <stdio.h>
#include <string.h>

int main() {
    int t, flag, i, l, n[21];
    char s[21];
    scanf("%d", &t);
    while (t--){
        scanf("%s", s);
        l = strlen(s);
        for (i = 0; i < l; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 'a' - 'A';
            if (s[i] < 'd')
                n[i] = 2;
            else if (s[i] < 'g')
                n[i] = 3;
            else if (s[i] < 'j')
                n[i] = 4;
            else if (s[i] < 'm')
                n[i] = 5;
            else if (s[i] < 'p')
                n[i] = 6;
            else if (s[i] < 't')
                n[i] = 7;
            else if (s[i] < 'w')
                n[i] = 8;
            else 
                n[i] = 9;
        }
        flag = 1;
        for (i = 0; i < l / 2; i++)
            if (n[i] != n[l - i - 1]) {
                flag = 0;
                break;
            }
        printf("%s\n", (flag ? "YES" : "NO"));
    }
    return 0;
}
