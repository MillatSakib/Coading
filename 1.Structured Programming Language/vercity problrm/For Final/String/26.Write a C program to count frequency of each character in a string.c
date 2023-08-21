#include <stdio.h>
#include <string.h>
int main(){
    //122  97
    int ch[52],len,temp;
    for(int i=0;i<52;i++){
        ch[i]=0;
    }
    char str[500];
    printf("Please enter a String: ");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++){
            if(str[i]>=97 && str[i]<=122){
                    temp=str[i];
                    ch[temp-97]++;
            }

            else if(str[i]>=65 && str[i]<=90){
                    temp=str[i];
                    ch[temp-39]++;
            }
    }
    for(int i=0;i<52;i++){
        if(i<26){
            if(ch[i]>0){
                printf("Frequency of '%c' is %d\n",(i+97),ch[i]);
            }
        }
        else if(i>=26){
        if(ch[i]>0){
                printf("Frequency of '%c' is %d\n",(i+39),ch[i]);
            }
        }
    }
    return 0;
}
