#include<stdio.h>
int main(){
    int n;
    printf("enter the number  ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && (n%15!=0)){
        printf("it is  divisible with 5 or 3 and not divisibleby 15");

    }
    else{
         printf("it is  divisible with 5 or 3 and divisible by 15");

    }
    

        


    return 0;

}