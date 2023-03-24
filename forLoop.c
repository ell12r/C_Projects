#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=1; int input;
    scanf("%d",&input);
    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",input,i, input*i);
    }
    
    
    return 0;
}