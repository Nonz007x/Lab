// 9
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b){
    int pa = *(int*)a;
    int pb = *(int*)b;
    return pa - pb;
}
int main(){
    int numbers[3];
    char al[4] = "";
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);
    qsort(numbers, 3, sizeof(int), compare);
    scanf("%s", &al);  
    for(int i=0;i<strlen(al);i++){
        if(al[i]=='A')
            printf("%d ",numbers[0]);
        if(al[i]=='B')
            printf("%d ",numbers[1]);
        if(al[i]=='C')
            printf("%d ",numbers[2]);
    }
    return 0;
    
}