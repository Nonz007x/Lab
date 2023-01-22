#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int fib = (1/sqrt(5))*(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n));
    printf("%d\n", fib);
}