#include <stdio.h>
#include <string.h>
int main(){
    int vowel=0,consonant=0,len;
    char string[100];
    printf("Please enter a String: ");
    gets(string);
    len=strlen(string);
    for(int i=0;i<len;i++){
        if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'){
            vowel++;
        }
        else if(string[i]==32){
            continue;
        }

        else{
            consonant++;
        }

    }
    printf("Vowel has: %d.\nConsonant has: %d.",vowel,consonant);

return 0;
}
