#include <stdio.h>

long int FindNFact(){
    long int nfact = 1, n, i;
    printf("\nEnter Value of n ");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++){
        nfact *= i;
    }
    printf("%ld", nfact);
    return nfact;
    
}
int main()
{
    FindNFact();
    return 0;
}