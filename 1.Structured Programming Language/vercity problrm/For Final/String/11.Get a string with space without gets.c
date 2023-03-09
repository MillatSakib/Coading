#include <stdio.h>
#include <string.h>
int main(){
    int i=0;
    char ch[500];
    printf("Please enter a string: ");
    while(1){
        ch[i]=getch();
        printf("*");
        if(ch[i]==13){
            break;
        }
        i++;
    }
    ch[i]='\0';
    printf("\nYou Type: %s",ch);
    return 0;
}
