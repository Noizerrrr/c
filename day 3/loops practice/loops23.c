#include<stdio.h>
int main()
{
int a,b,power=1;
printf("enter the a and b = ");
scanf("%d %d",&a,&b);
for(int i=1;i<=5;i++){
    power=power*a;
}
printf("%d",power);

return 0;
}