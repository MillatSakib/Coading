#include <stdio.h>
int main(){
    char ch[500];
    int len;
    printf("Please enter a string: ");
    gets(ch);
    for(len=0;ch[len]!='\0';len++){

    }
    printf("\nThe length of the string is %d",len);
    return 0;
}
