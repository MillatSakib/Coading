#include <stdio.h>
#include <string.h>
int main(){
    char upp[500];
    printf("Please enter a String: ");
    gets(upp);
    strupr(upp);
    printf("The converted upper case string is: %s",upp);
    return 0;
}
