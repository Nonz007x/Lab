#include <stdio.h>
#include <math.h>

double FindSeries()
{
    int n, i;
    double sum = 0;
    printf("\nEnter Value of n ");
    scanf("%i", &n);
    for (i = 1; i < n+1; i++){
    sum += (pow(-1, i + 1) / (2 * i- 1));
    }
    printf("%.2lf ", sum);
    return sum;
}

int main()
{
    FindSeries();
    return 0;
}