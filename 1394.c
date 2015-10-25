#include <stdio.h>
#include <math.h>
int main() {
    long a, b, n, n1;
    double s;
    while (scanf("%d %d", &b, &n) != EOF) {
        if (b == 0 && n == 0)break;
        s = pow(b, 1/(double)n);
        n1 = floor(s);
        if (b - pow(n1, n) > pow(n1 + 1, n) - b)printf("%d\n",n1 + 1);
        else printf("%d\n",n1);
    }
    system("pause");
    return 0;
}
