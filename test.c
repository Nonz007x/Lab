#include <stdio.h>
int abs(int x) {
    int const mask = x >> (31);
    return (x + mask) ^ mask;
}
void main(){
    int k = -2147483648;
    printf("%d", 2147483646^0);
    // // printf("%d", abs(-10));
    // for (int i = 0; i < 31; i++)
    // {
    //     k = k >> 1;
    //     printf("%d\n",k);
    // }
    
}