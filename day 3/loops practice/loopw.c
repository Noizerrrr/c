#include<stdio.h>
int main()
{
    int n,r=0,sum;
printf("enter the number = ");
scanf("%d",&n);
sum=n;
while(n!=0){
    r=r*10;
    r=r+(n%10);
    n=n/10;
}

printf("%d",r+sum);
return 0;
}