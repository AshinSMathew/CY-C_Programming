// Bubble sort 
#include<stdio.h>
void main()
{
	int a,i,j,x,k,b,c,d;
	printf("Enter the number of elements:");
	scanf("%d",&a);
	int bubble[a];
	printf("Enter %d integers:\n",a);
	for(i=0;i<a;i++)
	{	scanf("%d",&bubble[i]);
	}
	for(d=0;d<a-1;d++)
	{
		for(k=0;k<a-1;k++)
	        {
			b=bubble[k];
		        c=bubble[k+1];
		        if(b>c)
		        {	
				int temp;
				temp=b;
				bubble[k]=c;
				bubble[k+1]=temp;
				continue;
		        }
			
			else
			{	
				continue;
			}
	        }
	}
	
	printf("The sorted array is:\n");	
	for(j=0;j<a;j++)
	{	x=bubble[j];
		printf("%d ",x);
	}
	printf("\n");
}
	
