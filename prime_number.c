// Prime number

#include<stdio.h>
void main()
{
	int a,j=2,isprime=1;
	printf("Enter a natural number:");
	scanf("%d",&a);
	if(a<=1){
		printf("Factorial is defined for numbers greater than 1\n");
		}
	else if(a==2){
		printf("The Number is prime\n");
		}
	else if(a>2)
	{
		while(j<=a/2)
	       {	if(a%j==0)
		        {
				isprime=0;
				break;
		
			}
			else if(a%j==1)
			{
				j=j+1;
				continue;
			
			}
		}}
	if(isprime==1)
		{
			printf("%d is prime\n",a);
		}
	else if(isprime==0)
		{
			printf("%d is not prime\n",a);
		}
		
	
}
			
				
