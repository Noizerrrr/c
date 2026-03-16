#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5,total;
    printf("enter the marks of the subject s1 = ");
    scanf("%f",&s1);
    printf("enter the marks of the subject s2 = ");
    scanf("%f",&s2);
    printf("enter the marks of the subject s3 = ");
    scanf("%f",&s3);
    printf("enter the marks of the subject s4 = ");
    scanf("%f",&s4);
    printf("enter the marks of the subject s5 = ");
    scanf("%f",&s5);

    total= (s1+s2+s3+s4+s5)/5;
    printf("The total persentage is %f",total);
    
}