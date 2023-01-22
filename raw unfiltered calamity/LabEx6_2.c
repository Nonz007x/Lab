#include<stdio.h>
int main(){
    int id[10],i,j;
    float t[10],temp;
    for(i=0;i<10;i++)
        scanf("%d %f",&id[i],&t[i]);
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
            if(t[j]>t[j+1]){
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;

                temp=id[j];
                id[j]=id[j+1];
                id[j+1]=temp;
            }
    printf("1st = %d in %.2f\n2nd = %d in %.2f\n3rd = %d in %.2f\n",id[0],t[0],id[1],t[1],id[2],t[2]);
    return 0;
}   