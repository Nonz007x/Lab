#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    fgets(a,101,stdin);
    int length = strlen(a);
    for (int i = 0; i < length; i++){
        if (a[i] >= 'a' && a[i] <= 'z')
        a[i] -= 32;
    }
    printf("%s", a);
    return 0;
}
