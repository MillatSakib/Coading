//Write a C program to convert lowercase string to uppercase(without library function)
#include <stdio.h>
int main(){
    int different='a'-'A';
    int firstc='a';
    int lastc='z';
    int strlen;
    char arr[500];
    printf("Please enter a String: ");
    gets(arr);
    for(strlen=0;arr[strlen]!='\0';strlen++){
            if(arr[strlen]>='a' && arr[strlen]<='z'){
                arr[strlen]-=different;
            }
    }


    printf("The upper case converted string is: %s",arr);
    return 0;
}
