#include <stdio.h>
#include <string.h>
int main(){
    char str1[500],str2[500];
    int a,b,pos=0;
    printf("Please enter a string: ");
    fflush(stdin);
    gets(str1);
    printf("Enter a word for searching: ");
    fflush(stdin);
    gets(str2);
    a=strlen(str1);
    b=strlen(str2);
    printf("str1_len=%d str2_len=%d\n",a,b);
    for(int i=0;i<a;i++){
        if(str1[i]==str2[0]){ 
       int flag = 0;
        for(int j=0;j<b;j++){
            if(str1[i+j]==str2[j]){
                flag++;
                if(flag==b){
                    pos=i;
                    break;
                }
            }
            else break;
        }
        }
    }
    printf("String found at position %d\n",pos+1);
    return 0;


}
