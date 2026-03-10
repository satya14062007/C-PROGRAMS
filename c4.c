#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff;

    if (*a > *b)
        diff = *a - *b;
    else
        diff = *b - *a;

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    update(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}