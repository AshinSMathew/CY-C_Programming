#include <stdio.h>
void main(){
	int a;
	printf("Enter a Number");
	scanf("%d", &a);
	if (a>0){
		printf("The given number is positve");
	}
	else if (a<0){
		printf("The given number is negative");
	}
	else {
		printf("The given number is zero");
	}
}
