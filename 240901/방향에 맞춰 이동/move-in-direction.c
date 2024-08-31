#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int nx = 0;
    int ny = 0;


    char dir[N];
    int dir_num[N];
    int num[N];

    for (int i = 0; i < N; i++) {
        scanf("%c %d", &dir[i], &num[i]);
        if (dir[i] == 'E') dir_num[i] = 0;
        else if (dir[i] == 'S') dir_num[i] = 1;
        else if (dir[i] == 'W') dir_num[i] = 2;
        else dir_num[i] = 3;
    }

    for (int i = 0; i < N; i++) {
        nx += dx[dir_num[i]] * num[i];
        ny += dy[dir_num[i]] * num[i];
    }


    printf("%d %d", dx, dy);

    return 0;
}