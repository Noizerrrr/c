#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. =  ");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("\n%d x %d = %d",n,i,n*i);
        
    }

return 0;
}