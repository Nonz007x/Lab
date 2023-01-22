#include <stdio.h>
#include <string.h>

int isPrime(int num)
{
    if (num <= 1) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    return 1;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int num;
    int array[n];
    char result[n][2];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        array[i] = isPrime(num);
        if (array[i] == 1)
            strcpy(result[i],"y");
        else
            strcpy(result[i],"n"); 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", result[i]);
    }
    return 0;
}