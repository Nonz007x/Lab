#include <stdio.h>
#include <math.h>
int modifyBit(int n){ //10.1
    n = n & ~5;
    return n;
}
int modifyBit2(int n){ //10.2
    n = n | 32;
    n = n | 8;
    return n;
}
int modifyBit3(int n){ //10.3
    n ^= 2; 
    return n;
}
void decToBinary(int n){ //10.4
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    printf("%d", binaryNum[j]);
}
