#include <stdio.h>

int main() {

    int a = 5;
    int b = 6;
    int c = 7;

    int k;

    k = a;

    a = c;
    c = b;
    b = k;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}