#include <stdio.h>
#include <stdlib.h>

int main(){
//Declaring Variables
float gari_Beans;         float egg;
float riped_Plantain;     float P_discount;
float plain_Rice;         float AmountPayable;
float TotalSum;           float discountGiven;

//Main code

    printf("Please enter amount in cedis for Gari and Beans: ");
    scanf("%f", &gari_Beans);
    printf("Please enter amount in cedis for Plain Rice: ");
    scanf("%f", &plain_Rice);
    printf("Please enter amount in cedis for Riped Plantain: ");
    scanf("%f", &riped_Plantain);
    printf("Please enter amount in cedis for Egg: ");
    scanf("%f", &egg);
    printf("Please enter discount in percentage: ");
    scanf("%f", &P_discount);

//Calculating the amount payable
    
    TotalSum=(gari_Beans+plain_Rice+riped_Plantain+egg);
    discountGiven=(P_discount/100*TotalSum);
    AmountPayable=(TotalSum-discountGiven);
    printf("********************************************************\n");
    printf("The Sub-Total for your purchase is: %.2f \n", TotalSum);
    printf("The Discount for your purchase is: %.2f \n", discountGiven);
    printf("The Total amount payable for your purchase is: %.2f \n", AmountPayable);
    printf("********************************************************\n");

    return 0;
}