#include<stdio.h>

int main(){
    int P = 4;
    int * Pointer= &P;

    printf("P = %d\n",P );
    printf("Memory loc of P is %ld\n",&P);
    
      P = 1000;
     printf("Memory loc of Pointer is %ld\n", &Pointer );
    printf("Value inside Pointer is %ld\n",&P);
    printf("Get value that Pointer points to %ld\n",*Pointer);
  *Pointer = 2000; //Write to the address of P using the pointer with (*)
    printf("Get value of Pointer that  points to %ld\n", *Pointer); //read thr value of the address Pointer points to by giving it a knock (*)

    return 0;

}