#include <stdio.h>
void main(){
	int n,num,j=0,count=0;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	int ls[n];
	for (int i=0;i<n;i++){
		printf("Enter the numbers to be added in the list ");
		scanf("%d",&ls[i]);
	}
	printf("Enter the number to be checked in the array ");
	scanf("%d",&num);
	while (j<n){
		if (ls[j]==num){
			printf("%d is present at index %d              ",num,j);
			count++;}
	j++;
	}
	if (count<=1)
		printf("Not Found");
}	
