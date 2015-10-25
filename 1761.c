#include <stdio.h>

int main() {
    char isbn[14];
    int sum, weight, i;
    while (scanf("%s", isbn) != EOF) {
        sum = 0;
        weight = 1;
        for (i = 0; i < 11; i++) {
            if (isbn[i] >= '0' && isbn[i] <= '9')
                sum += weight++ * (isbn[i] - '0');
        }
        sum %= 11;
        if (sum == isbn[12] - '0' || sum == 10 && isbn[12] == 'X')
            printf("Right\n");
        else {
            isbn[12] = (sum == 10) ? 'X' : sum + '0';
            printf("%s\n", isbn);
        }
    }
    return 0;
}
