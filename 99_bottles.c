#include <stdio.h>
#include <stdlib.h>
int main(){
   int i;
   int j=1;
   for (size_t i = 99; i > 0; i--)
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
            printf("No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more,99 botles of beer on the wall\n");
        }
   

    return 0;
}