#include <stdio.h>
#include <math.h>

void main() {
float p , r, t, i;
printf("Enter principal amount: ");
scanf("%f", &p);
printf("Enter rate of interest: ");
scanf("%f", &r);
printf("Enter time in years: ");
scanf("%f", &t);
i = p * (pow(1 + r / 100, t)) ;
printf(" compound interest = %.2f\n", i);
}