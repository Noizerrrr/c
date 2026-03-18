#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number a b c  ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b || b>c){
        printf("A is largest among them ");
    }
    if(a<b || b>c){
        printf("C is largest among them ");

    }
    else{
        printf("c is largest among them ");

    }

    return 0;

}