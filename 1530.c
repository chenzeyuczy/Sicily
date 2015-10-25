#include <stdio.h>
#include <string.h>

int main() {
    char s[81];
    int i;
    while (gets(s) && s[0] != '#') {
        for (i = 0; i < strlen(s); i++) {
            switch (s[i]) {
                case ' ':
                    printf("%%20");
                    break;
                case '!':
                    printf("%%21");
                    break;
                case '$':
                    printf("%%24");
                    break;
                case '%':
                    printf("%%25");
                    break;
                case '(':
                    printf("%%28");
                    break;
                case ')':
                    printf("%%29");
                    break;
                case '*':
                    printf("%%2a");
                    break;
                default:
                    printf("%c", s[i]);
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
