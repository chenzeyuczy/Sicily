#include <stdio.h>

int main() {
    int weight, sum, i;
    char isbn[14];
    while (scanf("%s", isbn) != EOF) {
        sum = 0;
        weight = 10;
        for (i = 0; i < 11; i++) {
            if (isbn[i] >= '0' && isbn[i] <= '9')
                sum += weight-- * (isbn[i] - '0');
        }
        sum %= 11;
        sum = (11 - sum) % 11;
        isbn[11] = '-';
        isbn[12] = sum < 10 ? sum + '0' : 'X';
        isbn[13] = '\0';
        printf("%s\n", isbn);
    }
    return 0;
}
