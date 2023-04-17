#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXUSERS 20
#define MAXLENGTH 10
      int UserOption;
      int ADMINUNIQUE=1234;
      int activeUsers =0;
      int activeAdmins=0;
      char userName[MAXLENGTH], password[MAXLENGTH];

void   CreateAccount();
int   UserLogin();
int   AdminLogin();
void   ViewUsers();
void   Login();

struct UserInfo{
    char userName[MAXLENGTH][MAXUSERS], password[MAXLENGTH][MAXUSERS];
};
struct UserInfo Users;
struct UserInfo Admin;
int main(){
   
    //printing options
    do
    {
    printf("*****************************************************************\n");
    printf("Welcome to techJigger's Password Database\n");
    printf("*****************************************************************\n\n");
    printf("1.Login\n");
    printf("2.Create Account\n");
    printf("3.View Active Users\n");
    printf("4.Quit\n");
    scanf("%d",&UserOption);
    
    //Switch statements to call various functions
            switch (UserOption)
            {
            case 1:

               Login();
                break;
            case 2:
        
                CreateAccount();
                break;
            case 3:
            
                ViewUsers();
                break;
            default:
            system("clear");
                printf("Invalid Option\n");
                break;
            }

    } while (UserOption != 4 );

    return 0;
}
void Login(){
    system("clear");
     printf("1.User Login\n");
                printf("2.Admin Login\n");
                scanf("%d",&UserOption);
                switch (UserOption)
                {
                case 1:
                system("clear");
                   if(UserLogin()){
                     printf("You are Succesfully Logged in!\n");
                  } else{
                printf("You have entered an incorrect Username or password!, Please try again\n");
            }
                    break;
                case 2:
                system("clear");
                     if(AdminLogin()){
                     printf("You are Succesfully Logged in as an Admin!\n");
                  } else{
                printf("You have entered an incorrect Username, password or Admin code!, Please try again\n");
            }
                    break;
                default:
                system("clear");
                    printf("1.Invalid Option\n");
                    break;
                }
}
int UserLogin(){
    system("clear");
    printf("Enter your username: \n");
    scanf("%s",userName);
    printf("Enter your Password: \n");
    scanf("%s",password);
        for (int i=0; i < activeUsers; i++){
            if (strcmp(userName , Users.userName[i]) == 0 &&  strcmp(password, Users.password[i]) == 0 ){
               return 1;
            }
        }
        return 0;
}

int AdminLogin(){
    system("clear");
    printf("Enter your username: \n");
    scanf("%s",userName);
    printf("Enter your Password: \n");
    scanf("%s",password);
        for (int i=0; i<activeAdmins; i++){
             if (strcmp(password,Admin.password[i]) == 0 && strcmp(userName,Admin.userName[i]) ==0){
        return 1;
    }
        }

return 0;
}

void ViewUsers(){
  
        for (int i=0; i<activeUsers ; i++){
            printf("............................................\nUsername        |       Password\n............................................\n");
            printf("%s           |       %s\n\n\n\n",Users.userName[i],Users.password[i]);
    }
}

void CreateAccount(){
    printf("1.Create User account\n");
    printf("2.Create admin account\n");
    scanf("%d",&UserOption);
        switch (UserOption)
        {
        case 2:
        
        system("clear");
            printf("Enter username: \n");
    scanf("%s",Admin.userName[activeAdmins]);
    printf("Enter a strong Password: \n");
    scanf("%s",Admin.password[activeAdmins]);
    printf("Enter your admin ID: \n");
    int adminunique;
    scanf("%d",&adminunique);   if (adminunique != ADMINUNIQUE)
    {
        printf("You have entered a wrong admin ID!, Try again\n");
    }
    
    activeAdmins++;
            break;
        
       case 1:
    system("clear");
    printf("Enter username: \n");
    scanf("%s",Users.userName[activeUsers]);
    printf("Enter a strong Password: \n");
    scanf("%s",Users.password[activeUsers]);

activeUsers ++;
        }

}