#include <stdio.h>

int findMaximum(int* data) {
     int max = 0;
     for (int i = 0; i < 10; i++)
        if (max < data[i])
            max = data[i];
    return max;
     
}
int findMinimum(int* data) {
    int min = 1000;
     for (int i = 0; i < 10; i++)
        if (min > data[i])
            min = data[i];
    return min;
}

int sorting(int* data) {
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 10; j++) {
            if (data[j] < data[i]) {
                int x = data[i];
                data[i] = data[j];
                data[j] = x;
            }
        }
    }
}

float findAverage(int* data) {
    int sum = 0;
    float average;
    for (int i = 0; i < 10; i++)
        sum += data[i];
    average = (float)sum / 10;
    return average;
}
int main() {
    int data[10];
    int i = 0;
    do {   
        scanf("%d", &data[i]);
        i++;
    } while(i<10);
    i = 0;
    sorting(data);
    printf("max = %d\n", findMaximum(data));
    printf("min = %d\n", findMinimum(data));
    printf("average = %.2f\n", findAverage(data));

    do {
        printf("%d ", data[i]);
        i++;
    } while(i<10);
    return 0;
}