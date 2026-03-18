#include<stdio.h>
void arryfunction(int ptr[], int n){
    for(int i=0;i<n;i++){
        printf("the value of the arry is %d and %d\n ",i+1,ptr[i] );
    }
}

int main()
{
    int arry[] = {1,2,3,4,5,6,4};
   arryfunction(arry,7) ; 
return 0;
}