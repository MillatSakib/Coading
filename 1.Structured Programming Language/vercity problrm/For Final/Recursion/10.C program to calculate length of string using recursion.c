#include <stdio.h>

int str_len(char str[500],int i){
    if(str[i]!='\0'){
        return str_len(str,i+1);
    }
        else{
            return i;
        }
}

int main(){
    char str[500];
    int  i=0;
    printf("Please enter a string: ");
    gets(str);
    printf("The length of string is %d",str_len(str,i));
    return 0;
}
