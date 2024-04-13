//To find largest among three numbers

#include<stdio.h>
void main()
{
  float a,b,c;
  printf("Enter the first number:");
  scanf("%f",&a);
  printf("Enter the second number:");
  scanf("%f",&b);
  printf("Enter the third number:");
  scanf("%f",&c);
  
  if(a>=b && a>=c){
  	printf("%f is the largest\n",a);
  	}
  else if(b>=a && b>=c){
  	printf("%f is the largest\n",b);
  	}
  else {
  	printf("%f is the largest\n",c);
  	}
 }
