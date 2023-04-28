#include <stdio.h>
#include <stdlib.h>
int main(){
        float f1= 0.1;
        if (f1 == 0.1){ //Note: Floating Point comparison is always false
            printf("Equal");
        }else {
            printf("Not Equal\n");
        }
int i=-1;
        if (sizeof(int) > i){ //Note: Floating Point comparison is always false
            printf("True");
        }else {
            printf("False");
        }
    return 0;
}