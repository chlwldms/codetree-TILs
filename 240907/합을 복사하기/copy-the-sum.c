#include <stdio.h>

int main() {

    int a = 1;
    int b = 2;
    int c = 3;

    a = a + b + c;
    b = a;
    c = a;

    printf("%d %d %d", a, b, c);

    return 0;
}