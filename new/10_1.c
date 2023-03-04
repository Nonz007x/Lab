#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    fgets(a,101,stdin);
    int length = strlen(a)-1;
    int n = length*0.5;
    for (int i = 0; i < n; i++){  
        int temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
    }
    printf("%s", a);
    return 0;
}
