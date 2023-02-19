#include <stdio.h>
#include <stdlib.h>
 
 int main(){
//Declaring Variables
float salesPercentage=0.3;
float mondaySalary=120*(salesPercentage*1200);
float tuesdaySalary=110*(salesPercentage*1350);
float wednesdaySalary=95*(salesPercentage*1100);
float thursdaySalary=125*(salesPercentage*1400);
float fridaySalary=114*(salesPercentage*1300);
float WeeklySalary=(mondaySalary+tuesdaySalary+wednesdaySalary+thursdaySalary+fridaySalary);
//Main code
    printf("Monday:                             %.2f\n", mondaySalary);
    printf("Tuesday:                            %.2f\n", tuesdaySalary);
    printf("Wednesday:                          %.2f\n", wednesdaySalary);
    printf("Thursday:                           %.2f\n", thursdaySalary);
    printf("Friday:                             %.2f\n", fridaySalary);
    printf("**********************************************\n");
     printf("Total Weekly Payable Amount (GHC):  %.2f\n", WeeklySalary);
    printf("**********************************************\n");

    return 0;
 }