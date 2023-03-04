#include <stdio.h>

int findDigit(int remainer[], unsigned long long code)
{
    for (int i = 12; i >= 0; i--)
    {
        remainer[i] = code % 10;
        code /= 10;
    }
}
const char* isValid(int digit[])
{
    int sum = 0;
    int check = 0;
    char *valid = "Valid";
    for (int i = 13, j = 0; i > 1; i--, j++)
        sum += digit[j] * i;
    check = (11-(sum % 11))%10;
    if(check != digit[12])
        valid = "Invalid";
    return valid;
}
int main()
{
    unsigned long long int code;
    int digit[13];
    scanf("%llu", &code);
    code += 10000000000000;
    findDigit(digit, code);
    printf("Your ID is %s", isValid(digit));
}