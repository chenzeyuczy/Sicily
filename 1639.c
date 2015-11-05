#include <stdio.h>
#include <string.h>

int main() {
    int len, i, counter;
    char in[100], out[51];
    while (gets(in)) {
        counter = len = 0;
        memset(out, '\0', 51);
        for (i = 0; i < strlen(in) && counter + len <= 50; i++) {
            if (in[i] >= '0' && in[i] <= '9') {
                counter = counter * 10 + in[i] - '0';
            } else {
                counter = counter > 0 ? counter : 1;
                memset(out + len, in[i], counter);
                len += counter;
                counter = 0;
            }
        }
        printf("%s\n", (counter + len <= 50 ? out : "TOO LONG"));
    }
    return 0;
}