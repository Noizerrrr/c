#include<stdio.h>

int main()
{
    int rollnumber ;
    printf("enter your roll no. :\n");
    scanf("%d", &rollnumber);
    if (rollnumber==1)
    {
        printf("your name is hemraj");
        
    }
    else if (rollnumber==2)
    {
        printf("your name is rohit");
    }
    else if (rollnumber==3)
    {
        printf("your name is virat");
    }
    else {
        printf("you are not invited");
    }
return 0;
}