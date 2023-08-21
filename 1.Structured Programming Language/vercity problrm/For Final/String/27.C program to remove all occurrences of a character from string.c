#include <stdio.h>
#include <string.h>
int main(){
    char str[500],ch;
    int len;
    printf("Please enter a string: ");
    gets(str);
    printf("Please enter a charecter for remove occurences: ");
    scanf("%c",&ch);
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==ch){
                len--;
                for(int j=i;j<len;j++){
                    str[j]=str[j+1];
                }
                i--;

        }
    }
    str[len]='\0';
    printf("The occurences removed string is \"%s\"",str);
    return 0;

}
