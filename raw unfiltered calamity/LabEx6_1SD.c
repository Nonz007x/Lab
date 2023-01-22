#include <stdio.h>
#include <math.h>
int main(){
    float sum = 0;
    float sd, mean;
    int n;
    int num[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    mean = sum/n;
    for (int i = 0; i < n; i++)
        sd += pow(num[i] - mean,2);
    
    sd = sqrt(sd/(n-1));
    printf("%.2f\n",sd);

}