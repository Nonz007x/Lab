#include <stdio.h>
#include <stdlib.h>
void getMaxRepeatingElement(int array[], int n, int *maxElement) 
{
    int i, j, count;
    int maxCount = 0;
    for(i = 0; i<n; i++)
    {
        count = 1;
        for(j = i+1; j < n; j++)
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                    *maxElement = array[j];
            }
    }
}
void searchElement(int array[], int arraysize ,int maxElement, int *occurences)
{
    for (int i = 0; i < arraysize; i++)
        if (array[i] == maxElement)
            *occurences += 1;
}
int main()
{
    int array[50];
    int n = 0;
    int input = 1;
    int maxElement = 0;
    int occurrences = 0;
    while (input != 0)
    {      
        scanf("%d", &input);
        array[n] = input;
        n++;
    }
    getMaxRepeatingElement(array, n, &maxElement);    
    searchElement(array, n, maxElement, &occurrences);
    printf("%d %d",maxElement, occurrences);   
    return 0;
}