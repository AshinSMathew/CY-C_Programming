#include <stdio.h>
#include <math.h>

void main() 
{
    float a, b, c;
   float d, r1, r2 ;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) 
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) 
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and same: %.2f and %.2f\n", r1, r2);
    } else
     {
        
        printf("Roots are complex and different:");
    }

    
}