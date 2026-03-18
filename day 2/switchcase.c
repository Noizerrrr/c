#include <stdio.h>

int main()
{
    int rating;
    printf("enter your rating between (1-4) \n ");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:

        printf("your rating is 1");
        break;
    case 2:
        printf("your rating is 2");
        break;
    case 3:
        printf("your rating is 3");
        break;
    case 4:
        printf("your rating is 4");
        break;
    default:
        printf("invalid rating");
        break;
    }

    return 0;
}