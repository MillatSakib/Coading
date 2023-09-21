#include <stdio.h>
#include <string.h>
int main(){
    char str[500],cmp;
    int len,index;
    printf("Please enter a string: ");
    gets(str);
    printf("Please enter a charecter for comparisn: ");
    cmp=getchar();
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==cmp){
            index=i;
        }
    }

    printf("The last occurance of '%c' is %d",cmp,index);
    return 0;
}