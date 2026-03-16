#include<stdio.h>

float interest(float p,float r,float t){
    float si;
    si = (p*r*t)/100;
    printf(" simple intrest is = %f",si);
    
}
int main(){
    float p,r,t,si;
    printf("Enter the p ,r,t= ");
    scanf("%f %f %f",&p,&r,&t);

    interest(p,r,t);

    
    return 0;

}