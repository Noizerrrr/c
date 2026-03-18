#include<stdio.h>

int main()
{
    int i=0,n;
    printf("enter the value :");
    scanf("%d",& n);
    do
    {
      printf("the value is %d\n",++i); 

    } while (i<n);
    
  

    
return 0;
}