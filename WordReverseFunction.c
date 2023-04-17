#include <stdio.h>
#include <stdlib.h>

char WordReverse();
int main(){


        WordReverse();
    return 0;

}
char WordReverse(){
    char word[20];
    int *letter0=&word[0], *letter1=&word[1], *letter2=&word[2], *letter3=&word[3], *letter4=&word[4], *letter5=&word[5], *letter6=&word[6], *letter7=&word[7], *letter8=&word[8], *letter9=&word[9], *letter10=&word[10], *letter11=&word[11];
    printf("Enter the word to reverse: ");
    scanf("%s",word);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",*letter11,*letter10,*letter9,*letter8,*letter7,*letter6,*letter5,*letter4,*letter3,*letter2,*letter1,*letter0);
    
    
    return 0;
}