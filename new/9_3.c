#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char buf[128];
    char *ptr;
    unsigned long res;
    gets(buf);
    res = strtol(buf, &ptr, 10);
    printf("%lu\n",res);
    printf("%s\n",ptr);

    return 0;
}