#include <stdio.h>
#include <string.h>

int filter[9] = {0x1b0, 0x1f8, 0x0d8, 0x1b6, 0x1ff, 0x0db, 0x036, 0x03f, 0x01b}, step, find;
char path[10];

int convert(char *state) {
    int num = 0;
    for (int i = 0; i < strlen(state); i++) {
        num <<= 1;
        num += (state[i] == 'b') ? 1 : 0;
    }
    return num;
}

void search(int state, int p) {
    int target;
    if (state == 0) {
        find = 1;
        return;
    }
    for (int i = p + 1; i <= 9; i++) {
        path[step++] = i + '0';
        target = (state ^ filter[i - 1]) & 0x1ff;
        search(target, i);
        if (find)
            return;
        path[--step] = '\0';
    }
}

int main() {
    int t, init;
    char state[10];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", state);
        init = convert(state);
        if (init == 0) {
            printf("11\n");
            continue;
        }
        step = find = 0;
        memset(path, '\0', sizeof(path));
        search(init, 0);
        printf("%s\n", path);
    }
    return 0;
}
