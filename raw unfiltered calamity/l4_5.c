#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int firstPos(int num)
{
    if (num % 2 == 0)
        return 10000000;
    return 0;
}
int secondPos(int num)
{
    if (num % 10 % 2 == 0)
        return 0;
    return 1000000;
}
int thirdPos(int num)
{
    int pos;
    if (num % 4 == 0)
        pos = 0;
    else if (num % 2 == 0)
        pos = 1;
    else if (num % 3 == 0)
        pos = 0;
    else    
        pos = 1;
    return pos*100000;
}
int fourthPos(int num)
{
    int pos;
    if (num % 6 == 0)
        pos = 0;
    else if (num % 2 == 0)
        pos = 1;
    else if (num % 5 == 0)
        pos = 0;
    else    
        pos = 1;
    return pos*10000;
}
int fifthtPos(int num)
{
    int pos = !(num>10)*1000 + !(num>100)*100 + !(num>1000)*10 + !(num>10000);
    return pos;
}
int main()
{
    int num;
    scanf("%d",&num);
    int result = firstPos(num) + secondPos(num) + thirdPos(num) + fourthPos(num) + fifthtPos(num);
    printf("%.8d",result);

}