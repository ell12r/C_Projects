#include <stdio.h>
#include <stdlib.h>
int My_func(int a){
    int sum=(2*a);
    return sum;
}
int main(){
    int x=My_func(8);
    printf("%d\n",x);
    return 0;
}

