#include <stdio.h>

int main(void)
{
    int menu;

    scanf("%d", &menu);
    switch (menu) {
    case 1:
        printf("Add\n");
        break;
    case 2:
        printf("Subtract\n");
        break;
    case 3:
        printf("Exit\n");
        break;
    default:
        printf("Invalid\n");
        break;
    }
    return 0;
}
