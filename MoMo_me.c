#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int option;      float Amount;           int C3=(276651344);
    int Toption;     int C1=(503819638);     int C4=(577133677);
    int unumber;     int C2=(278775798);     int C5=(503298677);
    int Boption;     int C0=(503979181);     int C6=(241082742);
    int Moption;     int Aoption;            int Foption;   float bal;
    char Dr1[20];        char Dr1Me[]=("how are you");
 printf("*************************************\n");
    printf("...Welcome to MoMo_me...\n");
 printf("*************************************\n");
    printf("1.Transfer money\n2.Momo pay\n3.Airtime/Bundles\n4.Allow cashout\n5.Financial services\n...Enter Your desired option number...:");
scanf("%d",&option);
//Transfer Money
if (option == 1)
{
       printf("*************************************\n");
            printf("...Transfer Money...\n");
       printf("*************************************\n");
               printf("1.Momo user\n");
                  printf("2.other networks\n");
                     printf("0.cancel\n");
            scanf("%d",&Toption);
        if (Toption == 1)
        {
         printf("*************************************\n");
            printf("MOMO User\n");
         printf("*************************************\n");
            printf("1.my contacts\n2.input contact: ");
            scanf("%d", &Toption);
        }
        if (Toption == 1){
         printf("*************************************\n");
            printf("...My contacts...\n");
            printf("Choose from your Contacts: \n");
         printf("*************************************\n");
          printf("1.0%d\n2.0%d\n3.0%d\n4.0%d\n5.0%d\n6.0%d\n7.0%d \n: ",C1,C2,C3,C4,C5,C6,C0);
         scanf("%d", &Toption);
        }
        if (Toption == 1) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C1);
        }
         if (Toption == 2) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C2);
        }
         if (Toption == 3) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C3);
        }
         if (Toption == 4) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C4);
        }
         if (Toption == 5) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C5);
        }
         if (Toption == 6) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C6);
        }
         if (Toption == 7) {
          printf("Please Enter amount to send: ");
        scanf("%f",&Amount);
          printf("Holaa!, %.2f has been sent to 0%d\n",Amount,C0);
        }
         else  {
          printf("Sorry, We encontered an error please try again: \n");
        } 

         if (option == 2)
        {
         printf("*************************************\n");
            printf("...Sorry we dont support sending to other networks yet...\n");
         printf("*************************************\n");
        }
         if (option == 0)
        {
         printf("*************************************\n");
            printf("Bye!! Use us if you want to\n");
         printf("*************************************\n");
        }
}     

//MOMO pay
if (option ==2)
{
         printf("*************************************\n");
            printf("MOMO pay\n");
         printf("*************************************\n");
            printf("Sorry we dont support MOMO pay yet!, come back later...\n");
         
 
 }

 //Airtime/Bundles
if (option ==3)
{
         printf("*************************************\n");
            printf("...Airtime/Bundles...\n"); 
         printf("*************************************\n");
            printf("1.Airtime\n2.Bundle\n:");
         scanf("%d",&option);
         if (option ==1)
         {
            printf("*************************************\n");
            printf("Exiting Airtime offers for you!\n");
            printf("*************************************\n");
            printf("1.0.5p\n2.1GH\n3.2GH\n4.5GH\n5.10GH\n6.20GH\n:");
            scanf("%d",&Aoption);
         }
         if (Aoption == 1)
         {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %f cedis has been added to your account\n",0.5);

         
         }
         else if (Aoption == 2) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %d cedis has been added to your account\n",1);
         
         }
         else if (Aoption == 3) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %d cedis has been added to your account\n",2);
         
         }
         else if (Aoption == 4) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %d cedis has been added to your account\n",5);
         
         }
         else if (Aoption == 5) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %d cedis has been added to your account\n",10);
         
         }
         else if (Aoption == 6) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Aoption);
            printf("Y'ello, an airtime amount of %d cedis has been added to your account\n",20);
         
         }
      if (option == 2)
      {
      printf("*************************************\n");
            printf("Exiting Data offers for you!\n");
            printf("*************************************\n");
            printf("1.25MB @0.5p\n2.60MB @.1GH\n3.125MB @.2GH\n4.600MB @5GH\n5.1.5GB @10GH\n6.2.5GB @20GH\n:");
            scanf("%d",&Boption);
      }
      if (Boption == 1)
         {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 25MB of data\n");

         
         }
      else if (Boption == 2) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 60MB of data\n");
         
         }
      else if (Boption == 3) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 125MB of data\n");
         
         }
      else if (Boption == 4) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 600MB of data\n");
         
         }
      else if (Boption == 5) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 1.5GB of data\n");
         
         }
      else if (Boption == 6) {
            printf("Press 1 to confirm your purchase : ");
            scanf("%d",&Boption);
            printf("Y'ello, You have puchased 2.5GB of data\n");
         
         }
}

//Allow cashout
if (option ==4)
{
         printf("*************************************\n");
            printf("Allow Cashout\n");
         printf("*************************************\n");
            printf("Enter agent till number: ");
            scanf("%d",&option);
            printf("Are you sure you want to allow cashout? \n1.Confirm Cashout \n2.Cancel\a\n");
            scanf("%d",&option);
            printf("Wait to enter you momo pin to recieve payments:\b\n");
            
 
 }

 //Financial Services
if (option ==5)
{
         printf("*************************************\n");
            printf("Financial Services\n");
         printf("*************************************\n");
            printf("\n1.My account\n2.Loan\n3.Dr.Jiggy\n");
            scanf("%d",&option);
            if (option == 1)
         {
           printf("*************************************\n");
            printf("My Account\n");
         printf("*************************************\n");
            printf("\n1.account balance\n2.mini statements\n3.request statement\n");
            scanf("%d",&Foption);
         
         }
            else if (Foption == 1) {
            printf("Y'ello, your account balance is %.2f (GHC)\n",bal);
         
         }
            else if (Foption == 2) {
            printf("Y'ello, Please hold on a little bit your mini statement will be sent to you via sms\n");
         
         }
            else if (Foption == 4) {
            printf("1.Confirm statement request\a\n");
         
         }
            if (option == 2) {

         printf("*************************************\n");
            printf("Sorry you're not qualified for the techJigger loan, try again later!");
         printf("*************************************\n");
         }
        
              if (option == 3) {

         printf("*************************************\n");
            printf("Welcome to Dr.Jiggy!\nHow may I help you?\n");
         printf("*************************************\n");
         printf("Ask me something?\a\n");
         scanf("%s",Dr1);        
         printf("I am doing Good , How about you?");
         }
         
         
            
 
 }
    return 0;

}