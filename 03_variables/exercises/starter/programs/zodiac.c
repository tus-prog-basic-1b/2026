#include <stdio.h>

int main(void)
{
    int remainder;

    // FIXME: 12種類の表示は次回以降に完成させる
    scanf("%d", &remainder);
    switch (remainder) {
    case 0:
        printf("Monkey\n");
        break;
    default:
        printf("Other\n");
        break;
    }
    return 0;
}
