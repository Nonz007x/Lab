#include <stdio.h>
int main()
{
    unsigned int totalrowcol;
    int rowno, colno;
    scanf("%d", &totalrowcol);
    for (rowno = 0; rowno < totalrowcol; rowno++)
    {
        for (colno = 1; colno < totalrowcol-rowno; colno++)
        {
            printf(" ");
        }
        printf("*");
        for (colno = 0; colno < 2*rowno-1; colno++)
        {
            printf(" ");
        }
        if (rowno) printf("*");
        printf("\n");
    }

    for (rowno -= 2; rowno >= 0; rowno--)
    {
        for (colno = 1; colno < totalrowcol-rowno; colno++)
        {
            printf(" ");
        }
        printf("*");
        for (colno = 0; colno < 2*rowno-1; colno++)
        {
            printf(" ");
        }
        if (rowno) printf("*");
        printf("\n");
    }
    return 0;
}