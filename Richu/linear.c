#include<stdio.h>
void main()
{
	int n,i,b,j;
	float a[100];
	printf("Enter the elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 	scanf("%f",&a[i]);
	 	}
	 	
	 	printf("Enter the elemnet to be found");
	 	scanf("%d",&b);
	 	for(j=0;j<=b;j++)
	 	{
	 	if(b==a[j])
	 	b=1;
	 	}
	 	if(b==1)
	 	{
	 	printf("Match found");
	 	}
	 	 else
	 	 {
	 	 printf("match not found ");
	 	}

	 	
}
