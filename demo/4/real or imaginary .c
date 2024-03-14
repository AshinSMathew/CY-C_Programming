#include <stdio.h>
int main(){
    int a,b,c,d,real,imaginary;
    printf("enter the real and imaginary of equation 1:");
    scanf("%d %d",&a,&b);
    printf("enter the real and imaginary of equation 2 :");
    scanf("%d %d",&c,&d);
    real=a+c;
    imaginary=(b+d);
    printf("(%d+%di)+(%d+%di)=(%d+%di)",a,b,c,d,real,imaginary);
return 0;
}