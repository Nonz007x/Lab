#include <stdio.h>
void swap(int n, int array[n][n])
{
    int temp;
    for (int i = 1; i < n; i++)  //set i to index 1 to preserve first row of array
    {   
        temp = array[i][i-1];    //set temporary value from first index of array
        for (int j = 0; j < n-1; j++)
            array[i][j] = array[i-1][j+1];
        array[i][n-1] = temp;   //set last index of array to first index of array
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++)      //initialize array
        for (int j = 0; j < n; j++)
            array[i][j] = j+1;    

    swap(n, array);
    for (int i = 0; i < n; i++)     //print the array
    {
        for (int j = 0; j < n; j++)
            printf("%d " ,array[i][j]);
        printf("\n");
    }   
    return 0;
}