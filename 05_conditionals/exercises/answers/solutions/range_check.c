#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);
    if (x >= 0 && x <= 100) {
        printf("in\n");
    } else {
        printf("out\n");
    }
    return 0;
}
