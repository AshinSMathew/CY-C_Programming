#include <stdio.h>
void main(){
	float a,b,c,d,e,f,g,exp;
	printf("Enter value of A:");
	scanf("%f",&a);
	printf("Enter value of B:");
	scanf("%f",&b);
	printf("Enter value of C:");
	scanf("%f",&c);
	printf("Enter value of D:");
	scanf("%f",&d);
	printf("Enter value of E:");
	scanf("%f",&e);
	printf("Enter value of F:");
	scanf("%f",&f);
	printf("Enter value of G:");
	scanf("%f",&g);
	exp=((a-b/c*d+e)*(f+g));
	printf("%f",exp);
}
