#include<stdio.h>
#include<string.h>
void main()
{
	int n=0,i,flag;
	printf("Enter the numbers of elements");
	scanf("%d",&n);
	char name1[n],temp,name2[n];
	printf("Enter the word");
	scanf("%s",name1);
	strcpy(name2,name1);
	for(i=0;name2[i]!='\0';i++)
	{
	
		if(strcmp(name2,name1)==0)
		{
			
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{printf("Palindrome");
	}
	else
	printf("not palindrome");
	
	
}

