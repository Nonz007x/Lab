// 5
#include <stdio.h> 
int main()
{
    unsigned long int amount;
    int bankCounts[7] = {0,0,0,0,0,0,0};
    int const banknote[7] = {1000, 500, 100, 50, 20, 10, 1};
    int i = 0;
    scanf("%d", &amount);
    if (amount >= 0 && amount <= 1000000)
    {
        while (amount)
        {
            if (amount >= banknote[i])
            {
                bankCounts[i] = amount / banknote[i];
                amount -= banknote[i]*bankCounts[i];
            }i++;
        }
        printf("%d %d %d %d %d %d %d",
        bankCounts[0], bankCounts[1], bankCounts[2], bankCounts[3], bankCounts[4], bankCounts[5], bankCounts[6]);
    }      
    return 0;
}