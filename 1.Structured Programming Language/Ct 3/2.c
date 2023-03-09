#include <stdio.h>
#include <string.h>
int main(){
    char strarr1[50],strarr2[50];
    int str_len,flag=0;
    printf("Please enter an string: ");
    gets(strarr1);
    printf("\n");
    str_len=strlen(strarr1);
         for(int i=str_len;i>=0;i--){
        if(i==str_len)
            strarr2[i]='\0';
            else
                strarr2[i]=strarr1[str_len-1-i];
     }
     for(int i=0;i<str_len;i++){
        if(strarr1[i]!=strarr2[i]){
            flag++;
        }
     }
     if(flag==0){
        printf("Yes.\"%s\" is a Palindrome.",strarr2);
     }
     else{
        printf("No,\"%s\" isn't a Palindrome.",strarr1);
     }
    return 0;

}
