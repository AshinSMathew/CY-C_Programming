#include <stdio.h>
void main(){
	int n, temp,r,sum=0;
	printf("Enter a Number");
	scanf("%d",&n);
	temp=n;
	while (n>0){
		r=n%10;
		sum=sum+ (r*r*r) ;
		n=n/10;
	}
	if (temp==sum){
		printf("Armstrong Number");}
	else{
		printf("Not Armstrong Number");}
}
