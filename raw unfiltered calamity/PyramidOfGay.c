#include <stdio.h>
#include <stdlib.h>
int input;
int i, j;
void odd(int input)
{
    for (i = 0; i < input / 2 + 1; i++)
    {
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    for (i -= 2; i >= 0; i--)
    {
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
}
void even(int input)
{
    for (i = 0; i < input / 2; i++)
    {
        for (j = 0; j < i * 2 + 2; j++)
            printf("*");
        printf("\n");
    }

    for (i -= 2; i >= 0; i--)
    {
        for (j = 0; j < i * 2+2; j++)
            printf("*");
        printf("\n");
    }
}
int main(void)
{
    unsigned int input;
    scanf("%d", &input);
    fflush(stdin);
    if (input % 2 == 0)
    {
        even(input);
    }else{
        odd(input);
    }

    return 0;
}
