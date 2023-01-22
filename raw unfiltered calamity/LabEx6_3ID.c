#include<stdio.h>
#include<string.h>
int main(){
	int total=0,arr[13],check;
	char string[14];
    printf("Please Enter ID: ");
	scanf("%s",string);
	for(int i=0,j=13;i<12;i++,j--)
		total += (string[i] - '0')*j;
	check = (11-( total % 11))%10;
	if(check == string[12]-'0')
		printf("Your ID is Valid");
	else
		printf("Your ID is Invalid");
	return 0;
}