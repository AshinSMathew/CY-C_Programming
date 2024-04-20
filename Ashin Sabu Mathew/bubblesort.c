#include <stdio.h>
void main(){
	int n,greater,lowest;
	printf("Enter number of elements on array ");
	scanf("%d",&n);
	int bubble[n];
	for (int i=0;i<n;i++){
		printf("Enter numbers to the array (%d)",i+1);
		scanf("%d",&bubble[i]);}
	for (int x=0;x<n;x++){
		for (int j=0;j<n-1;j++){
			if (bubble[j]>bubble[j+1]){
				greater=bubble[j];
				lowest=bubble[j+1];
				bubble[j]=lowest;
				bubble[j+1]=greater;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%d ",bubble[i]);}
}
