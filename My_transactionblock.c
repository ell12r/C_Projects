#include <stdio.h>
/*
Index Number: 7162921
Program: Telecommunication Engineering
*/

//Defining variables
#define AvgTransactionPerblock 2000
#define CoreSec_single 0.5
//Function to calculate the time
double TimeCalculator(int Nblocks,int Ncores){
    double Tcore=CoreSec_single/Ncores;
    int Ttransactions= Nblocks * AvgTransactionPerblock;
    double time=Tcore*Ttransactions;
return time/3600;
}
//Taking inputs and generating outputs
int main(){
    int Nblocks, Ncores;\
    printf("Enter the number of blocks: ");
    scanf("%d",&Nblocks);
    printf("Enter the number of cores: ");
    scanf("%d",&Ncores);

    double Time=TimeCalculator(Nblocks,Ncores);
    printf("Time to audit %d blocks on a %d core device is: %.2f hours\n",Nblocks,Ncores,Time);
    return 0;
}