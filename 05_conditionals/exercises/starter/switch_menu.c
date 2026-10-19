#include <stdio.h>

int main(void)
{
    int menu;

    scanf("%d", &menu);
    switch (menu) {
    case 1:
        printf("Add\n");
    case 2:
        printf("Subtract\n");
    case 3:
        printf("Exit\n");
    default:
        printf("Invalid\n");
    }
    return 0;
}
