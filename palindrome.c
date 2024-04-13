//Palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,x;
	
	printf("Enter the length of the word you want to check:\n");
	scanf("%d",&a);
	char arr1[a],arr2[a];
	if(a>2)
	{	
		printf("Enter a word with %d letters\n",a);
		scanf("%s",arr1);
	}
	else
	{
		printf("Enter a valid length\n");
	}
	strcpy(arr2,arr1);
	char* strrev(char* arr1);
	char* strlwr(char* arr1);
	x=strcmp(arr1,arr2);
	
	if(x==0)
	{	printf("%s is a palindrome word\n",arr2);
	
	}
	else
	{
		printf("%s is not a palindrome word\n",arr2);
	}
	return 0;	
}
