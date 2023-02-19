#include <stdio.h>
#include <stdlib.h>

int main(){
int Calculus;   int CalculusCredit;
int BasicElec;  int BasicCredit;
int ElecMachine;    int ElecCredit;
double cwa;            int scoreSum;
int creditHours;
    printf("Enter your score for Calculus and credit hour: ");
    scanf("%d %d" ,&Calculus, &CalculusCredit);
    printf("Enter your score for Basic Electronics and credit hour: ");
    scanf("%d %d" ,&BasicElec, &BasicCredit);
    printf("Enter your score for Electrical Machines and credit hour: ");
    scanf("%d %d" ,&ElecMachine, &ElecCredit);
    scoreSum=(Calculus*CalculusCredit)+(BasicCredit*BasicElec)+(ElecCredit*ElecMachine);
    creditHours=(CalculusCredit+BasicCredit+ElecCredit);
    cwa=(scoreSum/creditHours);
    printf("******************************************\n");
    printf("Your SWA is : %.2f\n", cwa);
    printf("******************************************\n");
         return 0;
}