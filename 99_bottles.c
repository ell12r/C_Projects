#include <stdio.h>
#include <stdlib.h>
int main(){
       system("clear");

   int i;
   int j=1;

   int test;   //i implemented the asking part for Fun but it's nice so i'll leave and come back to make it better
   printf("How many bottles of beer do you want me to sing for? \n"); 
   printf("*******************************************************\n");
   scanf("%d",&test);
   system("clear");

   for (size_t i = test; i > 0; i--)
   {

         if (i ==1) {
         printf("%ld bottle of beer on the wall, %ld bottle of beer.Take one down and pass it around, no more bottles of beer on the wall.\n",i,i);
         }
         
         else{
        printf("%ld bottles of beer on the wall, %ld bottles of beer.Take one down and pass it around, %lu bottles of beer on the wall.\n",i,i,i-j);
            }

   }
        if (i == 0)
        {
            printf("No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more,%d botles of beer on the wall\n",test);
        }
   

    return 0;
}