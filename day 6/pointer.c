#include <stdio.h>

int main()
{
    int i;
    i = 34;
    int *j = &i;//j will store the adress now 
    printf("the value is = %d \n", i);
    printf("the value is = %d ", *j);
    printf("the address is = %u\n ", j);
    printf("the address is = %u \n", j);
    printf("the address is = %u ", & i);

    return 0;
}