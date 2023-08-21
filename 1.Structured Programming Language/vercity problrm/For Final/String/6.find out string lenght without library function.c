#include <stdio.h>
int main(){
    int i;
    char str[100];
    printf("Please enter a String: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){

    }
    printf("The length of \"%s\" is %d.",str,i);
    return 0;
}
