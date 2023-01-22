#include <stdio.h>
#include <stdlib.h>
//find prime find max
int isPrime(int num)
{
    if (num == 1) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    
    for (int i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    return 1;
}

void findMax(int array[], int n, int *max)
{
    for (int i = 0; i < n; i++)
        if (array[i] > *max) 
            *max = array[i];
    if (*max == 0)
        *max = -1;
}

int main()
{
    int number = 1;
    int max = 0;
    int *numberArray = (int*)calloc(100, sizeof(int));
    int *primeArray = (int*)calloc(100, sizeof(int));
    int n = 0;
    while (number != 0)
    {      
        scanf("%d", &number);
        numberArray[n] = number;
        n++;
    }
    numberArray = realloc(numberArray, sizeof(int)*n);
    primeArray = realloc(primeArray, sizeof(int)*n);

    for (int i = 0; i < n; i++)
        if (isPrime(numberArray[i]))
            primeArray[i] = numberArray[i];

    findMax(primeArray, n, &max);
    printf("%d", max);
    free(numberArray);
    free(primeArray);
}