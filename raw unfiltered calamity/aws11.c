#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int think[n];
    for (size_t i = 0; i < n; i++)
        scanf("%d",&think[i]);
    // a)
    printf("a) %d %d %d %d\n", think[0], think[1], think[2], think[3]);
    // b)
    printf("b)");
    int bmax;
    int indexC[n-1];
    int more, i, j;
    bmax = think[2];
    for (i = 0, j = 0; i < n; i++){
        more = think[i];
        if (bmax < more){
            printf(" %d", more);
            indexC[j] = i;
            j++;
        }
    }
    // c)
    printf("\n");
    printf("c)");
    for (i = 0; i < j; i++)
        printf(" %d", indexC[i]);
    // d)
    printf("\n");
    printf("d)");
    think[n] = think[2] + think[3];
    for (i = 0; i < n+1; i++)
        printf(" %d", think[i]);
    // e)
    printf("\n");
    printf("e)");
    think[3] = think[4] - think[2];
    for (i = 0; i < n+1; i++)
        printf(" %d", think[i]);
    // f)
    printf("\n");
    printf("f)");
    if(think[1] < think[5])
        printf(" 6");
        else printf(" 2");
    // g)
    printf("\n");
    printf("g)");
    int temp;
    temp = think[1];
    think[1] = think[n];
    think[n] = temp;
    n += 1;
    for (i = 0; i < n; i++)
        printf(" %d", think[i]);
    // h)
    printf("\n");
    printf("h)");
    int even;
    for (i = 0; i < n; i++){
        even = think[i];
        if (even%2==0){
            printf(" %d", even);
        }
    }
    return 0;
}