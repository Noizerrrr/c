#include<stdio.h>
int main()
{
int a=1,b=1,sum=0,n;
printf("Enter the number of terms:");
scanf("%d",&n);
for(int i = 1; i <= n-2; i++)
{
    printf("%d ",a);
    sum = a + b;
    a = b;
    b = sum;
}
printf("\nSum of the series is: %d",sum);
return 0;
}