#include <stdio.h>
#include <string.h>
int main(){
    int len;
    char str[500];
    printf("Please enter a string: ");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        char temp;
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("The reversed string are: %s",str);
    return 0;
}
