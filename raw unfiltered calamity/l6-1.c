#include <stdio.h>
#include <math.h>
void heightInput_sum(int n, short int height[], float *sum){
    for (int i = 0; i < n; i++){
        scanf("%d", &height[i]);
        *sum += height[i]; 
    }
}
void calc_sd(int n, float mean, float *sd,short int height[]){
    float temp = 0;
    for (int i = 0; i < n; i++){
        temp += pow(height[i] - mean,2);
    }
    *sd = sqrt(temp/(n-1));
    printf("%.2f\n",*sd);
}
int main(){
    float sum = 0;
    float sd, mean;
    int n;
    short int height[100];
    scanf("%d",&n);
    mean = sum/n;
    heightInput_sum(n, &height[0], &sum);;
    calc_sd(n, mean, &sd, &height[0]);
}