#include <stdio.h>
#include <string.h>
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
            else if(arr[strlen]>='A' && arr[strlen]<='Z'){
                arr[strlen]+=different;
            }
    }


    printf("The toggle string is: %s",arr);
    return 0;
}
