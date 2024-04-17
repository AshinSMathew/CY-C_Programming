// Evaluate the arthmetic expression

#include<stdio.h>
void main()
{
  float a,b,c,d,e,f,g,x=0;
  
  printf("Enter the first number:");
  scanf("%f",&a);
  
  printf("Enter the second number:");
  scanf("%f",&b);
   
  printf("Enter the third number:");
  scanf("%f",&c);
  
  printf("Enter the fourth number:");
  scanf("%f",&d);
  
  printf("Enter the fifth number:");
  scanf("%f",&e);
   
  printf("Enter the sixth number:");
  scanf("%f",&f);
  
  printf("Enter the seventh number:");
  scanf("%f",&g);
  
  x=((a-b/c*d+e)*(f+g));
  
  printf("Solution = %f \n",x);
}
  
