#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int len,compare;
	char string[50],reverse;
	printf("Enter a string");
	scanf("%s",string);
	len=strlen(string);
	reverse=strrev(string);
	
	compare=strcmp(reverse,string);
	if (compare==0)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}
