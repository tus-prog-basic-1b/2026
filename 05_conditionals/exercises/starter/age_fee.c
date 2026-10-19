#include <stdio.h>

int main(void)
{
    int age;

    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid\n");
    } else if (age <= 12) {
        printf("500\n");
    } else if (age <= 5) {
        printf("0\n");
    } else if (age < 64) {
        printf("1000\n");
    } else {
        printf("700\n");
    }
    return 0;
}
