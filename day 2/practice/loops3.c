#include<stdio.h>
int main(){
    int a;
    printf("enter the year ");
    scanf("%d",&a);
    if(a%4 == 0){
        printf("it is the leap year ");

    }
    else{
        printf("it is not the leap year ");
    }

    return 0;
}