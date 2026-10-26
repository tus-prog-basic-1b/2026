#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 21; i++) {
        if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
