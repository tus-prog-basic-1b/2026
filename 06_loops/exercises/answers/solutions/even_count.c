#include <stdio.h>

int main(void)
{
    int count = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
