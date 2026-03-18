#include<stdio.h>

int main()
{
    int a,b;
    printf("enter ther age of the person : ");
    scanf("%d", &a);
    if (a<18)
    {
        printf("the person is not fit for drinking ");

    }
    else{
        printf("the person is fit for drinking");
    }

return 0;
}