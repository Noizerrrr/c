#include<stdio.h>
int main()
{
    int a,d,n;
    printf("enter the first tearm = ");
    scanf("%d",&a);
    printf("enter the first defference = ");
    scanf("%d",&d);
    printf("enter the first  n tearm = ");
    scanf("%d",&n);
     for (int i=a;i<=(2*n-1);i=i+d){
        printf("\n%d",i);


    }



return 0;
}