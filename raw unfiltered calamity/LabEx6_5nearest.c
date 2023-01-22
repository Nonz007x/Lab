#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    int n;
    int coord1, coord2;
    float min = 9999999;
    float temp;
    scanf("%d",&n);
    float arrx[n], arry[n];
    for(int i=0; i<n; i++)
        scanf("%f %f",&arrx[i], &arry[i]);
    for(int i=0; i<n-1; i++)
        for (int j = i; j < n-1; j++){
            temp = sqrt(pow((arrx[i])-(arrx[j+1]),2)+pow((arry[i])-(arry[j+1]),2));
            if(temp < min){
                min = temp;
                coord1 = i+1;
                coord2 = j+2;
            }
            
        }
    printf("%d %d %.2f", coord1, coord2, min);
}