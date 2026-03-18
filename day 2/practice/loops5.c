#include<stdio.h>
int main(){
    int cost_price,selling_price,profit,loss;
    printf("enter the cost price and selling price = ");
    scanf("%d %d",&cost_price,&selling_price);
    if(cost_price<selling_price){
        profit = selling_price-cost_price;
        printf("the seller has made profit of %d",profit);


    }
    if(cost_price>selling_price){
        loss=cost_price-selling_price;
        printf("the seller has made loss of  %d",loss);


    }
    
    
    
}