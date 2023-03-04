#include <stdio.h>
float interest(float num, int year){
    if(year <= 0)
        return num;
    else {
        return interest(num * 1.05,year-1) ;
    }
}

int main(){
    printf("%f", interest(10000,30));
    return 0;
}