#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char str[100];
    printf("Please enter a String: ");
    gets(str);
    length=strlen(str);
    printf("The length of \"%s\" is %d",str,length);
    return 0;
}
