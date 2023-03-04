#include <stdio.h>

void function(int n,char *arr,int *size){ 
        for (int i =0;i<*size;i++){
            for (int j = 0; j < n; j++)
                {
                    printf("%c",*(arr+(j*100)));
                }
            arr++;
        }
}

void main(){
    int n;
    scanf("%d",&n);
    int size[n];
    char word[n][100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",word[i]);
        int j = 0;
        while (word[i][j] != '\0') {
            j++;
        }
        size[i] = j;
    }
    function(n,*word,size);
}