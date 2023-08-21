#include <stdio.h>
int main(){
    char str1[500],str2[500],*strptr1,*strptr2;
    strptr1=&str1,strptr2=&str2;
    printf("Please enter a string: ");
    fflush(stdin);
    gets(str1);
    while(*strptr1!='\0'){
            *strptr2=*strptr1;
            strptr1++,strptr2++;
        }
        *strptr2='\0';
        printf("The copied string are '%s'",str2);
        return 0;
}
