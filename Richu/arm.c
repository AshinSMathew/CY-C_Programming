#include<stdio.h>
void main()
{
	int temp=0,r,sum,N;
	
	printf("Enter the number");
	scanf("%d",&N);
	temp=N;
	while(N>0)
	{
		r=N%10;
		sum=sum+(r*r*r);
	
		N=N/10;
		}
		if(temp==sum)
		printf("Armstorng number");
		else
		printf("Not an Armstrong number");
}

