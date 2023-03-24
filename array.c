#include<stdio.h>
int main(){
int marks [8],creditHours[8];
int totalmarks = 0;
int totalCreditHours = 0, total= 0;



printf("Enter your 8 various marks and credit hours:");
scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &marks[0], &creditHours[0], &marks[1], &creditHours[1],&marks[2],&creditHours[2], &marks[3],&creditHours[3],&marks[4],&creditHours[4],&marks[5],&creditHours[5],&marks[6],&creditHours[6],&marks[7],&creditHours[7]);

for(int i=0;i<=7; i++){
    totalCreditHours= totalCreditHours + creditHours[i];
    totalmarks= totalmarks + marks[i];
    total+=(marks[i] * creditHours[i]);

} 
float Total=total/totalCreditHours;
    printf("Your SWA is %.2f\n",Total);
    return 0;

}