#include <stdio.h>
int main(){
        char str[500],*strptr;
        strptr=&str;
        int len=0;
        printf("Please enter a String: ");
        fflush(stdin);
        gets(str);

        while(*strptr!='\0'){
            strptr++,len++;
        }
        printf("The string length is %d",len);
        return 0;
}
