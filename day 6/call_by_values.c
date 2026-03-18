#include <stdio.h>
int sum(int a, int b);
int main()

{
    int a = 12, b = 19;
    printf("the additon of the a and b is %d", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}