// Armstrong Number
#include<stdio.h>

void main()
{
	int a,b=1,x=0,temp;
	
	printf("Enter an integer:");
	scanf("%d",&a);
	temp=a;
	
	while(temp>0)
	{
	        
		b=temp%10;
		x=x+(b*b*b);
		temp=temp/10;
		
	}
	if(x==a)
	{	printf("%d is an armstrong number\n",a);
	}
		
	else
	{
		printf("%d is not an armstrong number\n",a);
	}
}
