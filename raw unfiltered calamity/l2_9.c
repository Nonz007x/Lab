#include <stdio.h>
#include <math.h>
int main()
{
    int workerA, workerB;
    int tableA, tableB;
    int dayA, dayB;
    int day;
    scanf("%d %d", &workerA, &workerB);
    scanf("%d %d", &tableA, &tableB);
    if ((workerA != 0 && tableA > 0) || (workerB != 0 && tableB > 0)) 
    {
    dayA = ceil((float)tableA/(workerA*6));
    dayB = ceil((float)tableB/(workerB*10));
    day = dayA>dayB?dayA:dayB;
    printf("%d\n", day);
    return 0;
    }
    printf("Unable to finish order");
}