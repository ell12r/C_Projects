#include <stdio.h>
#include <stdlib.h>

int PIN=1234;
double Bal=5000;
//Send money things
void sendMoney();  
void sendMoney_VodaNet();
void sendMoney_Other();
void sendMoney_BankAcc();
void sendMoney_LBankAcc();
void sendMoney_Unregistered();
void sendMoney_List();
void sendMoney_Number();
//End of Send Money things
void WithdrawCash();
//Airtime/Bundle
void BuyAirtimeorData();
void Airtime();
void Bundle();
void MyPhone();
//Airtime/Bundle
void MakePayments();
void PayBill();
//payments
void FinancialServices();
void insurance();
//Financial Services
void MyAccount();
void CheckBal();
//My accounts
void SelfService();
void resetPin();
void clear();
void cancel();
void Withdrawconfirm(float Amount, int Unumber);
void confirm(float Amount, int Unumber1);
int main(){
    clear();
    int UserOption;
    printf("Welcome To EllMOMO\n");
    printf("1. Send Money\n");
    printf("2. Withdraw Cash\n");
    printf("3. Buy Airtime or Data\n");
    printf("4. Make Payments\n");
    printf("5. Financial Services\n");
    printf("6. My Account\n");
    printf("7. Self Service\n");
    printf("Enter your option: ");
    scanf("%d",&UserOption);

       switch (UserOption)
        {
        case 1:
             sendMoney();
            break;
        
        case 2:
             WithdrawCash();
            break;
        case 3:
             BuyAirtimeorData();
            break;
         case 4:
             MakePayments();
            break;
         case 5:
             FinancialServices();
            break;
        case 6:
             MyAccount();
            break;
        case 7:
             SelfService();
            break;
        
        default:
        main();
        
        }
}
void clear(){
    system("clear");
}
void cancel(){
    printf(".");
}
void confirm(float Amount, int Unumber){
  
        printf("Thanks you have sent %.2f Ghana cedis to 0%d\n",Amount,Unumber);
    }
void Withdrawconfirm(float Amount, int Unumber){
  
        printf("Thanks you have Withdrawn %.2f Ghana cedis from %d\n",Amount,Unumber);
    }

//Send money
void sendMoney(){
        int UserOption;
        clear();
        printf("Send Money\n");
    printf("1. Vodafone Networks\n");
    printf("2. Other Networks\n");
    printf("3. To Bank Account\n");
    printf("4. From Linked Bank Account\n");
    printf("6. To unregistered\n");
    printf("0. Back\n");
    scanf("%d",&UserOption);

        switch (UserOption)
        {
        case 1:
             sendMoney_VodaNet();
            break;
        
        case 2:
             sendMoney_Other();
            break;
        case 3:
             sendMoney_BankAcc();
            break;
    
        case 0:
             main();
            break;
        
        default:
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        main();
        
        }

    }
void sendMoney_VodaNet(){

    clear();
    int UserOption;
    printf("Choose the reciever\n");
    printf("1. To enter recipient number\n");
    printf("2. My list\n");
    printf("0. Return to main menu\n");
    scanf("%d",&UserOption);
    switch (UserOption)
        {
        case 1:
             sendMoney_Number();
            break;
        
        case 2:
             printf("In Progresss\n");
            break;
        
        case 0:
             main();
            break;
        
        default:
        sendMoney_VodaNet();
        
        }
}
void sendMoney_Number(){
    clear();
    int Unumber1, Unumber2, matchCheck, Amount, pin, UserOption;
    printf("Enter recipient phone number\n");
    scanf("%d",&Unumber1);
    printf("Repeat recipient phone number\n");
    scanf("%d",&Unumber2);
    if (Unumber1 == Unumber2)
    {
        clear();
        printf("Enter Amount\n");
        scanf("%d",&Amount);
        clear();
        printf("Enter PIN\n");
        scanf("%d",&pin);
        if (pin == PIN)
        {
            clear();
            printf("1.confirm purchase\n2. cancel\n");
            scanf("%d",&UserOption);
            switch (UserOption)
            {
            case 1:
               confirm(Amount,Unumber1);
                break;
            
            default:
            main();
                break;
            }
        }
        
        else{
            printf("You entered a wrong PIN,please try again\n");
        }
        
    }
    else{
        clear();
         printf("User numbers do not match, check and continue\n");
    printf("1. Retry\n");
    printf("0. cancel\n");
    scanf("%d",&matchCheck);
        switch (matchCheck)
        {
        case 1:
            sendMoney_Number();
            break;
        case 0:
            cancel();
            break;
        
        default:
            main();
            break;
        }
        
    }
       
}
void sendMoney_List(){

}
void sendMoney_Other(){
    clear();
    int UserOption;
    printf("Please choose network\n");
    printf("1. MTN\n");
    printf("2. AirtelTigo\n");
    printf("3. G-Money\n");
    printf("4. ZeePay\n");
    printf("5. GhanaPay\n");
    scanf("%d",&UserOption);
    switch (UserOption)
        {
        case 1:
             sendMoney_Number();
            break;
        
        default:
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        
        }
}
void sendMoney_BankAcc(){
     int UserOption;
     clear();
    printf("Select your bank starting with the alphabet:\n");
    printf("1. A-D\n");
    printf("2. E-F\n");
    printf("3. G-R\n");
    printf("4. S-Z\n");
    printf("0. Return to main menu\n");
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 0:
    main();
    break;
    default:
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }
}
void sendMoney_LBankAcc(){

}
void sendMoney_Unregistered(){

}
 //end of Send Money things


// Withdraw Cash
    void WithdrawCash(){
        int UserOption, Till, Amount, pin;
        clear();
        printf("Withdraw Cash\n");
    printf("1. From Agent\n");
    printf("2. From ATM\n");
    printf("0. Back\n");
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 1:

        printf("Enter agent till number\n");
        scanf("%d",&Till);
        printf("Enter Amount\n");
        scanf("%d",&Amount);
        clear();
        printf("Enter PIN\n");
        scanf("%d",&pin);
        if (pin == PIN)
        {
            clear();
            printf("1.confirm purchase\n2. cancel\n");
            scanf("%d",&UserOption);
            switch (UserOption)
            {
            case 1:
               Withdrawconfirm(Amount,Till);
                break;
            
            default:
            main();
                break;
            }
        break;
    case 2:
         printf("Please Enter Pin to recieve Voucher\n");
         scanf("%d",&pin);
         if (pin == PIN)
         {
            printf("Your request is been Processed, You'll recieve an SMS confirmation shortly.\n");
         }else{
            clear();
          printf("You entered a wrong PIN,please try again\n");
        
    }
         
        break;
    case 0:
    main();
    break;
    
    default:
    main();
        break;
    }else{
        clear();
          printf("You entered a wrong PIN,please try again\n");
        
    }
    }
    }
    

//Buy Airtime or Data

    void BuyAirtimeorData(){
        clear();
        printf("Buy Airtime or Data\n");
    printf("1.Buy Airtime\n");
    printf("2. Buy Data/2Moorch \n");
    printf("3. Special Offers\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 1:
    Airtime();
        break;
    case 2:
        Bundle();
        break;
    
    default:
    clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
    
        break;
    }
    

    }
    void Airtime(){
        clear();
    printf("Buy Airtime\n");
    printf("1. My Phone\n");
    printf("2. Other Vodafone number \n");
    printf("3. Landline\n");
    printf("4. Other networks\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 2:
    clear();
        sendMoney_Number();
        break;
    case 4:
    clear();
    sendMoney_Number();
    break;
    default:
    clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }
    }
    void Bundle(){
         clear();
    printf("Buy Data\n");
    printf("1. Self\n");
    printf("2. Other\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption)
    {
        case 1:
        MyPhone();
        break;
    default:
     clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }

    }

void MyPhone(){
    int UserOption;
        clear();
            printf("1. 2Moorch No Expiry\n2. Daily/Bossu\n3. Weekly\n4. Monthly/Jumbo\n5. Night King\n6. Digi-Learn\n0. Go Back\n");
            scanf("%d",&UserOption);
            switch (UserOption)
            {
            case 0:
                Bundle();
                break;
            
            default:
            clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
                break;
            }
        }

//Make Payments
    void MakePayments(){
        clear();
        printf("Make Payments\n");
    printf("1. Pay Bill\n");
    printf("2. Buy Goods\n");
    printf("3. Fun and Games\n");
    printf("4. Generate Voucher   \n");
    printf("5. My List\n");
    printf("6. Pay Small Small\n");
    printf("7. Donations\n");
    printf("8. Complete Payments/ Transactions\n");
    printf("9. Schemes\n");
    printf("10. School Payments\n");
    printf("0. Back\n");
    int UserOption;
    scanf("%d",&UserOption);
switch (UserOption)
{
case 1:
clear();
    PayBill();
    break;
case 0:
main();
break;

default:
 clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
    break;
}
    }
    void  PayBill(){
            clear();
    printf("PayBill\n");
    printf("1. Vodafone\n");
    printf("2. Other\n");
    printf("3. Utilities\n");
    printf("4. GHQR\n");
    printf("5. Security Deposit\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption){
        default:
        clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }     
}
    
//Financial Services
    void FinancialServices(){
        clear();
        printf("Financial Services\n");
    printf("1. Insurance\n");
    printf("2. Pensions\n");
    printf("3. Loans\n");
    printf("4. Over Draft\n");
    printf("5. Savings\n");
    printf("6. Bank Services\n");
    printf("0. Back\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch(UserOption) {
        case 1:
        insurance();
        break;
        case 0:
        main();
        break;
        default:
         clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
     
    }

    }
     void insurance(){
        clear();
           printf("Insurance\n");
    printf("1. Travel Companion\n");
    printf("2. miFuture\n");
    printf("3. Hospital Support plan\n");
    printf("4. Cosmopolitan Insurance\n");
    int UserOption;
    scanf("%d",&UserOption);
switch (UserOption)
{
default:
 clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
    break;
}
     }

//My Account
    void MyAccount(){
        clear();
        printf("My Account\n");
    printf("1. Check Balance\n");
    printf("2. My Statements\n");
    printf("3. Change Pin\n");
    printf("4. Account Information\n");
    printf("5. My List\n");
    printf("6. Help\n");
    printf("7. Self Services\n");
    printf("0. Back\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 1:
        CheckBal();
        break;
        case 3:
        resetPin();
        break;

    case 0:
    main();
    break;

    default:
     printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }

    }
    void CheckBal(){
        clear();
        printf("Check Balance\n");
        printf("1. Main Account\n");
        printf("0. Back\n");
        int UserOption;
        scanf("%d",&UserOption);
        switch (UserOption)
        {
        case  1:
        clear();
                printf("Enter Pin\n");
                int Pin;
                scanf("%d",&Pin);
                if (Pin == PIN){
                    clear();
                    printf("*******************************************\n");
                    printf("Current Balance: %.2f\n\a",Bal);
                    printf("*******************************************\n");
                }else{
                    printf("You have entered an incorrect PIN, Please try again\n");
                }
        break;
        case 0:
             MyAccount();

        break;
        default:
        CheckBal();
            break;
        }




    }
    

//Self Service
    void SelfService(){
        clear();
        printf("Select Action\n");
    printf("1. Reset PIN\n");
    printf("2. Self Reversal(Vodafone/Voucher)\n");
    printf("3. Request Reversal(Other Networks)\n");
    int UserOption;
    scanf("%d",&UserOption);
    switch (UserOption)
    {
    case 1:
        resetPin();
        break;
    
    default:
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
        break;
    }

   
    }
    void resetPin(){
        clear();
        printf("1. Set Security Question and Answer\n");
        printf("2. Reset your Pin\n");
        int UserOption, Pin, NewPin;
        scanf("%d",&UserOption);
        switch (UserOption)
        {
        case 1:
        clear();
         printf("**************************\n");
        printf("In Progress\n");
         printf("**************************\n");
            break;
        case 2:
        clear();
        printf("...Reset Pin...\n");
        printf("Enter your old PIN: ");
        scanf("%d",&Pin);
        if (Pin == PIN){
            printf("Enter your new PIN: ");
            scanf("%d",&NewPin);
            PIN=NewPin;
            printf("Success: Your new Pin has been set!\n");
            main();
        }else{
            printf("You entered an incorrect Pin, Please try again\n");
        }
        break;
        default:
        main();
            break;
        }
    }
  