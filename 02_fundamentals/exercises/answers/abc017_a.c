#include <stdio.h>

int main(void) {
    int s1, e1, s2, e2, s3, e3;
    scanf("%d%d", &s1, &e1);
    scanf("%d%d", &s2, &e2);
    scanf("%d%d", &s3, &e3);
    printf("%d\n", s1 * e1 / 10 + s2 * e2 / 10 + s3 * e3 / 10);
    return 0;
}
