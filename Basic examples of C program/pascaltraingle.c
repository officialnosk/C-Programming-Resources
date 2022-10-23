#include <stdio.h>

int main()
{
    int i, j, space;
    int num = 1;
    for (i = 1; i <= 9; i++)
    {
        for (space = 1; space <= 10 - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == 1)
            {
                num = 1;
            }
            else
            {
                num = num * (i - j + 1) / (j - 1);
            }
            printf(" %d  ", num);
        }
        printf("\n");
    }
    return 0;
}