#include <stdio.h>
int main(){
    char ch[500],ch0[500];
    int i=0;
    printf("Please enter a string: ");
    gets(ch);
    while(ch[i++]!='\0'){
        ch0[i-1]=ch[i-1];
        ch0[i]='\0';
    }

    printf("The copied string are: %s",ch0);
    return 0;

}
