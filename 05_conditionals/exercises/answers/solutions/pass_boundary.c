#include <stdio.h>

int main(void)
{
    int score;

    scanf("%d", &score);
    if (score >= 60) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
    return 0;
}
