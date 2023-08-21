#include <stdio.h>
#include <string.h>
    int main()
    {
        char string[500];
        printf("Please enter a string: ");
        gets(string);
        char ch = '_';
        for(int i = 0; i < strlen(string); i++){
            if(string[i] == ' ')
                string[i] = ch;
        }
        printf("String after replacing spaces with given character: \n");
        printf("%s", string);
        return 0;
    }
