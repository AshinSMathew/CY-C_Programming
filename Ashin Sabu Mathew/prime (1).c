#include <stdio.h>
void main(){
	int num,i=2,prime;
	printf("Enter a number");
	scanf("%d",&num);
	while (i<=num){
		if (num%i==0){
			prime=0;
			break;
		}
		else{
			prime=1;
		}
		i++;
	}
	if (prime==1){
		printf("Prime Number");
	}
	else{
		printf("Not Prime Number");}
}
