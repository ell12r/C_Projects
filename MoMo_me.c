#include <stdio.h>
#include <stdlib.h>

#define PIN 1234
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
void BuyAirtimeorData();
void MakePayments();
void FinancialServices();
void MyAccount();
void SelfService();
void clear();
void cancel();
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
         case 4:
             sendMoney_LBankAcc();
            break;
        case 6:
            sendMoney_Unregistered();
            break;
        case 0:
             main();
            break;
        
        default:
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
             sendMoney_List();
            break;
        
        case 0:
             main();
            break;
        
        default:
        main();
        
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
           
            default:
           printf("In progress");
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
    printf("Please choose network");
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
        
        case 2:
             sendMoney_List();
            break;
        
        case 0:
             main();
            break;
        
        default:
        main();
        
        }
}
void sendMoney_BankAcc(){
     int UserOption;
    printf("Select your bank starting with the alphabet:\n");
    printf("1. A-D\n");
    printf("2. E-F\n");
    printf("3. G-R\n");
    printf("4. S-Z\n");
    printf("0. Return to main menu\n");
    scanf("%d",&UserOption);
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

            default:
          printf("In progress");
                break;
                break;
            }
        break;
    case 2:
        printf("Sorry we dont support that yet\n");
        break;
    case 0:
    sendMoney();
    
    default:
    main();
        break;
    }else{
          printf("You entered a wrong PIN,please try again\n");
        
    }
    }
    }
    

//Buy Airtime or Data

    void BuyAirtimeorData(){
        clear();
        printf("Buy Airtime or Data\n");
    printf("1.Buy Airtime\n");
    printf("2. Buy Data or 2Moorch \n");
    printf("3. Special Offers\n");
    

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

    }

//My Account
    void MyAccount(){
        clear();
        printf("My Account\n");
    printf("1. Check Balance\n");
    printf("2. My Statements\n");
    printf("3. Change Pinn");
    printf("4. Account Information\n");
    printf("5. My List\n");
    printf("6. Help\n");
    printf("7. Self Services\n");
    printf("0. Back\n");

    }
    

//Self Service
    void SelfService(){
        clear();
        printf("Select Action\n");
    printf("1. Reset PIN\n");
    printf("2. Self Reversal(Vodafone/Voucher)\n");
    printf("3. TRequest Reversal(Other Networks)\n");
   
    }
  