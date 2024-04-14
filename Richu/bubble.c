#include<stdio.h>
void main()
{
int i,j,temp=0,n=0,m;
printf("Enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
				if(a[j] > a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
	}
	for(m=0;m<n;m++)
	{
		printf("%d",a[m]);
	}
}

