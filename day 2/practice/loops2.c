#include<stdio.h>
int main(){
    int a;
    printf("enter the positive integer as an input = ");
    scanf("%d",&a);
    if( a % 5 == 0){
        printf("a is divisible with 5");

    }
    else{
        printf("it is not divisible with 5");
    }
    return 0;
}