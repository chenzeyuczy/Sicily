#include <stdio.h>
#include <string.h>

int main() {
    int count[26] = {0}, l, i, flag = 1;
    char s[101];
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; i < l; i++)
        count[s[i] - 'a']++;
    scanf("%s", s);
    if (strlen(s) != l) {
        flag = 0;
    } else {
        for (i = 0; i < l; i++)
            count[s[i] - 'a']--;
        for (i = 0; i < 26 && flag; i++) {
            if (count[i] != 0) 
                flag = 0;
        }
    }
    printf("%s\n", (flag ? "YES" : "NO"));
    return 0;
}
