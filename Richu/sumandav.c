#include<stdio.h>
void main()
{
	int n,i;
	float av,sum=0,a[100];
	printf("Enter the total number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	scanf("%f",&a[i]);
	sum=sum+a[i];
}
	av=sum/n;
	printf("The average is %f\n",av);
	printf("The sum is %f\n",sum);
	

}
