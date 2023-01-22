// 7
#include <stdio.h>
int greatestCommonDivisor(int m,int n)
{
    if (n == 0)
        return m;
    greatestCommonDivisor(n, m%n);
}
int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    printf("%d", greatestCommonDivisor(m, n));
    return 0;
}