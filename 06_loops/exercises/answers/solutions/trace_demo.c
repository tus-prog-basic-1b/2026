#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 3; i++) {
        sum = sum + i;
        printf("i=%d, sum=%d\n", i, sum);
    }
    return 0;
}
