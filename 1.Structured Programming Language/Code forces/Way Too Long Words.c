#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    int a;
    scanf("%d",&a);
    char ch[101];
     int ln;
    for(int i=0;i<a;i++){

        scanf("%s",&ch);
        ln=strlen(ch);
        if(ln>10){
            printf("%c%d%c\n",ch[ln-ln],ln-2,ch[ln-1]);


        }
      else{
            printf("%s\n",ch);
        }
    }
}
