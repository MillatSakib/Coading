#include <stdio.h>
#include <string.h>
int  main(){
    char str[500];
    char cmp;
    int len,index;
    printf("Please enter a string: ");
    gets(str);
    printf("Please enter a charecter: ");
    cmp=getchar();
    len=strlen(str);
    for(int i=0;i<len;i++){
         if(str[i]==cmp){
            index=i;
            break;
         }
    }
    printf("'%c' situated on %d",cmp,index);
    return 0;
}
