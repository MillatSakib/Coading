#include <stdio.h>
#include <string.h>
int main(){
    char low[500];
    printf("Please enter a string: ");
    gets(low);
    strlwr(low);
    printf("The converted Lowercase string are: %s",low);
    return 0;
}
