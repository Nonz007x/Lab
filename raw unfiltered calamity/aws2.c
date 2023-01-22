#include<stdio.h>
void check(int marks)
{
    if(marks<50)
        printf("F");
    else if(marks>=50 && marks<60)
        printf("D");
    else if(marks>=60 && marks<70)
        printf("C");
    else if(marks>=70 && marks<80)
        printf("B");
    else if(marks>=80)
        printf("A\n");
    if(marks < 80)
        printf(" %d\n", 80 - marks);
}

void main()
{
    int a,b,c;
    int sum1;
    scanf("%d/%d/%d",&a, &b, &c);
    sum1 = a + b + c;
    check(sum1);
}