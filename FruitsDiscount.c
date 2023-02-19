#include <stdio.h>
#include <stdlib.h>
int main(){
//defining global contants
    #define MelonPrice 4.0
    #define PinePrie 5.0
    #define OrangePrice 1.0
    #define GrapePrice 7.0
//defining variables
    int N_melon;    int N_pine;     int N_orange;    int N_grape; int N_items;
    float discount;      float TotalCost;    float discountGiven;    float amountPayable;

//Taking Input
        printf("********************************************\n");
        printf("Please enter the quantity of Water melon: ");
        scanf("%d",&N_melon);
        printf("Please enter the quantity of Pineapple: ");
        scanf("%d",&N_pine);
        printf("Please enter the quantity of Orange: ");
        scanf("%d",&N_orange);
        printf("Please enter the quantity of Grapes: ");
        scanf("%d",&N_grape);

//computing the total number of items bought and total cost
   TotalCost=((MelonPrice*N_melon)+(PinePrie*N_pine)+(OrangePrice*N_orange)+(GrapePrice*N_grape));
   N_items=(N_grape+N_melon+N_orange+N_pine);

//logic using if-else
            if (N_items <= 2)
            {
               discount=0;
            }
            else if ((N_items >2) && (N_items <= 5)) {
                discount=0.02;
            }
            else if ((N_items > 5) && (N_items <= 10)) {
                discount=0.05;
            }
            else if (N_items > 10) {
                discount=0.1;
            }
//calculating discount
    discountGiven=(TotalCost*discount);
    amountPayable=(TotalCost-discountGiven);

//Printing outputs
        printf("********************************************\n");
        printf("Total Amount (GHC): %.2f\n",TotalCost);
        printf("Discount given (GHC): %.2f\n",discountGiven);
        printf("Amount Payable (GHC): %.2f\n",amountPayable);
        printf("********************************************\n");
        
return 0;
}