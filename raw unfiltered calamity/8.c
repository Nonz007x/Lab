// 8
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, result;
    scanf("%d %d", &x, &y);
    _Bool Isvalid = (1 <= x && x <=100) && (1 <= x && x <=100);
    if (Isvalid)
    {
        printf("%d", result = ceil((float)y/x));
    }
}  