#include <stdio.h>

int main(){
    int hour;
    int minute;
    int time;
    scanf("%d:%d",&hour, &minute);
    time = hour * 60 + minute;
    if (time >= 430 && time <= 570)
        printf("Y");
    else
        printf("N");
}