#include <stdio.h>
#include <stdlib.h>
  
  int year;     int Tyear;
  int month;    int Tmonth;
  int dob;      int Tdate;
  int date;     int age;
  int daysMore; int monthMore;
int main()
{
       printf("Enter Today's date in the form 00 00 0000: ");
       scanf("%d %d %d",&Tdate, &Tmonth ,&Tyear);
      printf("Enter your date of birth in the form 00 00 0000: ");
      scanf("%d %d %d",&date, &month ,&year);
        age=(2023-year);
      printf("You're %d years old\n", age);
      monthMore=(month-Tmonth);
      daysMore=(date-Tdate);
      printf("Your birthday is in the next %d month(s) %d day(s)\n", monthMore, daysMore);
return 0;
}