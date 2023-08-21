
#include <stdio.h>
#include <string.h>
    int main()
    {
        char string[500],ch1,ch2;
        int count=0;
        printf("Input string: ");
        fflush(stdin);
        gets(string);
        printf("Input letter to find: ");
        scanf("%c",&ch1);
                for(int i = 0; i < strlen(string); i++){
            if(string[i] == ch1)
                count++;
        }
        if(count>0){
        printf("Input the replaced letter: ");
        scanf(" %c",&ch2);
        for(int i = 0; i < strlen(string); i++){
            if(string[i] == ch1)
                string[i] = ch2;
                count++;
        }
        printf("String after replacement: %s",string);
        }
        else{
        printf("Item not found.");
        }
        return 0;
    }
