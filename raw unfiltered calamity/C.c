#include <stdio.h>
#include <math.h>


int digitsize(long number)
{
    _Bool IsMorethanzero = number > 0;
    if (IsMorethanzero)
    {
        int digitsize = (number == 0) ? 1 : log10(number) + 1;
        return digitsize;
    }
    return 0;
}

int digitmultiplier(long number)
{
    int digits = digitsize(number);
    int result = 1;
    for (int i = 0; i < digits; i++)
    {
        result *= number % 10;
        number /= 10;
    }

    return result;
}

void invest(float gratuity_rate, float money_amount)
{
    float gratuity = gratuity_rate / 100 * money_amount;
    float subtotal = money_amount + gratuity;
    printf("the gratuity is %.2f baht and total is %.2f baht", gratuity, subtotal);
}

int absolute(int number)
{
    if (number > 0)
        return number;
    return 0 - number;

}

void main(void)
{

    int holder[4] = {};
    float median;
    unsigned short LENGTH = 4;
    scanf("%d %d %d %d", 
    &holder[0], &holder[1], &holder[2], &holder[3]);
    median = (holder[LENGTH/2 - 1] + holder[LENGTH/2])/2.0;
    printf("%.2f\n", median);

}