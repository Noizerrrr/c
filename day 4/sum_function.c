#include<stdio.h>
int sum(int a, int b);

int main()
{
    int c;
    c = sum(7,5);
    printf("the sum of the two intiger is %d",c);
    
return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}

