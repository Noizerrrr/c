#include<stdio.h>
int main()
{
    int n,x=1;
printf("enter the number = ");
scanf("%d",&n); 
for(int i=1;i<=n;i++)
{
    x=x*i;
    printf("\nthe factorial of %d is %d",i,x);
}


return 0;
}