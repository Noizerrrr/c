#include<stdio.h>
int main(){
    int l,b;
    printf("enter the length and breadth ");
    scanf("%d %d",&l,&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>b){
        printf("area is greater than its perimeter. ");

    }
    else if(a<b){
        printf("area is smaller than its perimeter. ");

    }
    else if(a==b){
        printf("they are same ");

    }

    return 0;
}