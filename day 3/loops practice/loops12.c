#include<stdio.h>
int main()
{
printf("enter a number : ");
int n,a;
scanf("%d",&n);
for (int i = 2; i <= n-1; i++)
{
   if(n%i==0){
    a=1;
    break;
   } 
   if(a== 0) {
    printf("\nthe given number is prime");
    break;
    
   }
   else{
    printf("\nthe given number is composite");
   }
        
}

return 0;
}