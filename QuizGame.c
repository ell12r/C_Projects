#include <stdio.h>
#include <stdlib.h>

struct UserInfo{
    char Username[20], Password[15]; int uniqueCode;
};

void StudentLogin();
void LecturerLogin();
void Error();
void Test();
void Practice();
int uniqueCode= 1234;
int main(){
    struct UserInfo user;
    system("clear");
    printf("Enter your User name: ");
    scanf("%s",user.Username);
    printf("Enter your Password: ");
    scanf("%s",user.Password);
    printf("Enter your unique code(Hit '0000' if student): ");
    scanf("%d",&user.uniqueCode);
   
   switch (user.uniqueCode)
   {
   case 0000:
   StudentLogin();
    break;
   case 1234:
   LecturerLogin();
    break;
   default:
   Error();
    break;
   }
    
    return 0;
}

void StudentLogin(){
   char UserOption;
   system("clear");
    printf("*************************************************************************************************\nheyy!! congratulations on finding the TechJigger's Quiz app \n This app has Two modes where users can login and take pratice test on their own or Login to take a quiz organized by their Lecturer\nAre you here for Practice? (reply with 'y' or 'n').\n*************************************************************************************************\n");
    scanf("%s",&UserOption);
    if (UserOption == 'y'){
        Practice();
    }else if (UserOption == 'n') {
        Test();
    
    }else{
        Error();
    }
}
void LecturerLogin(){
    system("clear");
    printf("*********************************************************\ntheTechJigger's Lecturer Login \n****************************************************************\n");


}
void Error(){
    system("clear");

}
void Test(){
    system("clear");
        printf("*********************************************************\ntheTechJigger's Student Test Mode\n****************************************************************\n");


}
void Practice(){
    system("clear");
    printf("*********************************************************\ntheTechJigger's Student Practice Mode\n****************************************************************\n");
}