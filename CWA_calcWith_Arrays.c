#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    int NCourses, IndexNo, RefNo, totalCredit=0;
    float totalSum;
    char Fname[20], Lname[20];

    printf("...WELCOME TO THE SWA GENERATION SYSTEM...\n\n\a");
    printf("Enter your full name: ");
    scanf("%s %s", Fname, Lname);
    printf("Enter your index number: ");
    scanf("%d",&IndexNo);
    printf("Enter your reference number: ");
    scanf("%d",&RefNo);
    printf("Enter the number of courses: ");
    scanf("%d",&NCourses);
    int Marks[NCourses], CreditHours[NCourses];
    char **Code_array = malloc(NCourses * sizeof(char *));
    printf("\n\nEnter the course code, Mark and credit hour: \n");
    for (size_t i = 0; i < NCourses; i++)
    {
        char *code = malloc(100 * sizeof(char));
        scanf("%s %d %d",code,&Marks[i],&CreditHours[i]);
        Code_array[i] = code;
        
    }

    printf("...........................................................................................................................\n........................................................SWA REPORT.........................................................\n...........................................................................................................................\n");
    printf("Name: %s %s\n",Fname,Lname);
    printf("Index Number: %d\n",IndexNo);
    printf("Reference Number: %d\n",RefNo);
    printf("...........................................................................................................................\n");

    printf(" Course Code         |       Mark         |       Credit Hour(s)      |       Total Mark    |\n");
    printf("Course Code          |       Marks        |       Credit Hour(s)      |       Total Mark     |\n");

    printf("...........................................................................................................................\n");
    for (size_t i = 0; i < NCourses; i++)
    {
        int TotalMark=(Marks[i] * CreditHours[i]);
        totalCredit += CreditHours[i];
        totalSum=(totalSum+TotalMark);
       

    printf("%s              |       %d           |      %d                    |       %d            |\n",Code_array[i],Marks[i],CreditHours[i],TotalMark);
    printf("...........................................................................................................................\n");
    }
    float SWA= totalSum/totalCredit;

    printf("                                                             SWA      |       %.2f         |\n",SWA);
    printf("                                                            SWA       |       %.2f          |\n",SWA);
    printf("...........................................................................................................................\n");
   
    return 0;

}