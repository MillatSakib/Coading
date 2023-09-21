#include <stdio.h>
int main(){
    char str1[500],str2[500],*strptr1,*strptr2;
    strptr1=&str1,strptr2=&str2;
    int len=0;
    printf("Please enter a string:  ");
    fflush(stdin);
    gets(str1);
    len=strlen(str1);
    *(strptr2+len)='\0';
    for(int i=len-1;i>=0;i--){
        *(strptr2+i)=*strptr1++;
    }
    printf("The reversed string are '%s'",str2);
    return 0;
}
