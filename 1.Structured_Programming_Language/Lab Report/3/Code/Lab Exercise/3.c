//Write a Program to take the value from the user as input any alphabet and check whether it is vowel or
#include <stdio.h>
int main(){
    char cha;
    printf("Please input a charecter: ");
    scanf("%c",&cha);
    switch(cha){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is VOWEL", cha);
            break;
            default:
                printf("%c is CONSONANT", cha);
                return 0;
    }
}
