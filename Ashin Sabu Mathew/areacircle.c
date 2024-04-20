#include <stdio.h>
#include <math.h>
//#define PI 3.14;
void main(){
	float r, p, area;
	printf("Enter the radius of circle\t");
	scanf("%f",&r);
	area= M_PI * pow(r,2);
	
	printf("Area of circle is %f",area);
}         
