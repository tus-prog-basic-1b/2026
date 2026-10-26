#include <stdio.h>

int main(void)
{
    int product = 0;

    for (int i = 1; i <= 5; i++) {
        product = product * i;
    }
    printf("%d\n", product);
    return 0;
}
