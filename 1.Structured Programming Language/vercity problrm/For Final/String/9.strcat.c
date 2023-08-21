#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],arr0[100];
    printf("Please enter a Srtirng: ");
    gets(arr);
    printf("Please enter another another string for Concataration: ");
    gets(arr0);
    strcat(arr,arr0);
    printf("The Concataration text is \"%s\"",arr);
    return 0;
}
