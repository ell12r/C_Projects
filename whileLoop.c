#include <stdio.h>
#include <stdlib.h>
int main(){
    int UserOption=12; int go1=1; int goo;
    scanf("%d",&goo);
   while (go1 <= UserOption)
   {
    printf("%d x %d = %d\n",goo,go1,goo*go1);
    go1++;
   }

   
    return 0;
}