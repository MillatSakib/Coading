#include <stdio.h>
#include <string.h>
int main(){
    char str1[500],ch,ch1;
    int len;
    printf("Please enter a string: ");
    fflush(stdin);
    gets(str1);
    printf("Please enter a Charecter by which string are replace: ");
    fflush(stdin);
    scanf(" %c",&ch);
    printf("Please enter a charecter which will be replaced: ");
    fflush(stdin);
    scanf(" %c",&ch1);
    len=strlen(str1);
    for(int i=0;i<len;i++){
        if(str1[i]==ch1){
            str1[i]=ch;
        }
    }
printf("The replaced string are '%s'",str1);
return 0;

}