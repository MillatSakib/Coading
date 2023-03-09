#include <stdio.h>
#include <string.h>
int main(){
    char str[500],cmp;
    int len,index=0;
    printf("Please enter a string: ");
    gets(str);
    printf("Please enter a charecter for comparisn: ");
    cmp=getchar();
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==cmp){
            index++;
        }
    }

    printf("The Total occurance of '%c' is %d",cmp,index);
    return 0;
}
