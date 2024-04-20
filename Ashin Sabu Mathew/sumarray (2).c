#include <stdio.h>
void main(){
	int n,s=0;
	printf("Enter number of elements on array ");
	scanf("%d",&n);
	int sum[n];
	for (int i=0;i<n;i++){
		printf("Enter numbers to the array");
		scanf("%d",&sum[i]);
		s=s+sum[i];
	}
	float avg=s/n;
	printf("Sum = %d",s);
	printf("   Average = %f",avg);
}
