#include <stdio.h>
// void worong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a = 4, b = 5;
    swap(&a, &b);
    printf("the swap 4 and 5 is %d and %d", &a, &b);
    // worong_swap(a,b);
   
    return 0;
  }//void worong_swap(int a, int b){
    //     int temp;
    //     a=temp;
    //     b=a;
    //     b=temp;
    void swap(int *a, int *b)
    {
        int temp;
        *a = temp;
        temp = *b;
        *b = *a;
    }
