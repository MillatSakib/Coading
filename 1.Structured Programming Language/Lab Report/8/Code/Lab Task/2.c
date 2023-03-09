//Write a C Program to Find the Length of a String.
#include <stdio.h>
#include <string.h>
int main(){
    char ch[500];
    printf("Plese enter a string: ");
    gets(ch);
    printf("The length of the string is %d",strlen(ch));
    return 0;
}
