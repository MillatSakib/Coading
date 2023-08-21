#include <stdio.h>
int main(){
    int a,b;
    printf("Please Enter the length of string: ");
    scanf("%d",&a);
    char ab[a];
    printf("Please enter the string for reverse it: ");
    fflush(stdin);
    gets(ab);
    b=strlen(ab);
    printf("The reversed string is: ");
    for(int abc=b-1;abc>=0;abc--){
        printf("%c",ab[abc]);
    }

}
