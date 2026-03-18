// make a code if the student is pass,fail distinsion
#include <stdio.h>

int main()
{
    float maths, eng, sst, sci, hindi, total;
    printf("enter the marks of eng\n");
    scanf("%f", &eng);
    printf("enter the marks of hindi\n");
    scanf("%f", &hindi);
    printf("enter the marks of maths\n");
    scanf("%f", &maths);
    printf("enter the marks of sci\n");
    scanf("%f", &sci);
    printf("enter the marks of sst\n");
    scanf("%f", &sst);
    total = (eng + hindi + maths + sci + sst) / 5;
    if (total > 70)
    {
        printf("congrats!!!! you have pass with distingtion");
    }
    else if (total < 70 && total > 60)
    {
        printf("congrates!! you have pass out with first class");
    }
    else if (total > 50 && total < 60)
    {
        printf("well done !!!! you pass with second class");
    }
    else if (total < 50)
    {
        printf("you are failed");
    }
    else
        printf("your aare faild");

    return 0;
}