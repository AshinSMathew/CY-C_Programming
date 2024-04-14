// To find the sum and average of n integers in an array
#include<stdio.h>
void main()
{
	int a,j=0,b=0,x,y,sum;
	float avg;
	printf("Enter the number of elements to find sum and average:");
	scanf("%d",&a);
	
	int num[a];
	printf("Enter %d integers:\n",a);
	for(x=0;x<a;x++){
		scanf("%d",&num[j]);
		
		}
	for(x=0;x<a;x++)
	{
		y=num[x];
		b=b+y;
		}
	avg=b/a;
	sum=b;
	printf("Sum=%d and Average=%f\n",sum,avg);
       
}
		
