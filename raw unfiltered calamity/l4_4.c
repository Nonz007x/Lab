#include <stdio.h>

int main()
{
    int amount;
    int one, two, three, four, five, six, seven;
    int expense = 0;
    int earnings;
    int profit; 
    scanf("%d %d %d %d %d %d %d", 
    &one, &two, &three, &four, &five, &six, &seven);
    amount = one + two + three + four + five + six + seven;
    earnings = amount * 100;
    while(amount > 0)
    {
        if (amount <= 100)
        {
            expense += amount * 80;
            amount = 0;
        }
        else if (amount <= 250)
        {
            expense += (amount - 100) * 70;
            amount -= (amount - 100);
        } 
        else
        {
            expense += (amount - 250) * 60;
            amount -= (amount - 250);
        }
    }
    printf("%d\n", expense);
    printf("%d\n", earnings);
    printf("%d", earnings-expense);
}