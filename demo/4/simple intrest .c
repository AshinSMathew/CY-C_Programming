#include <stdio.h>

void main () {
float p, t, r, i;
printf("Enter principal amount: ");
scanf("%f", &p);
printf("Enter rate of interest: ");
scanf("%f", &r);
printf("Enter time in years: ");
scanf("%f", &t);
i= (p * r * t) / 100;
printf("Simple Interest = %.2f\n", i);    
}