//Write a C Program to Copy a String.
#include <stdio.h>
#include <string.h>
int main(){
    char ch[500],ch0[500];
    printf("Please enter a string: ");
    gets(ch);
    strcpy(ch0,ch);
    printf("Copied string are: %s",ch0);
    return 0;

}
