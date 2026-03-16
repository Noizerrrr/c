#include<stdio.h>
int main(){
    float r;
    printf("enter the radius = ");
    scanf("%f",&r);
    
    float b,a,pi=3.142;
    a=4*pi*r*r;
    b=4.0/3.0*pi*r*r*r;
    printf("The area of sphere is = %f",a);
    printf("\nThe volume of sphere is = %f",b);


}

