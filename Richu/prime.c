#include<stdio.h>
void main()
{
	int num,i=2,prime;
	printf("Enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
		prime=1;
		break;
		i++;
	
		}
		if(prime==1)
		{
			printf("The numer is not prime");
	
}
			else
			{
				printf("The number is prime");
			}
	
}
