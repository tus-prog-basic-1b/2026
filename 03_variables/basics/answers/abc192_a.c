#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", 100 - x % 100);
    return 0;
}
