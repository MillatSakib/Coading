#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int a;
    char str1[100],str2[100];
    printf("Please enter a String: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    a=strcmp(str1,str2);
    if(a==0){
        printf("This is palindrom.%d",a);
    }
    else {
        printf("This is not palindrom %d",a);
    }
    return 0;
}
