#include <stdio.h>
#include <string.h>
int main(){
    int len;
    char arr1[100],arr2[100];
    printf("Please enter a string: ");
    gets(arr1);
    printf("Please enter another string for concataration: ");
    gets(arr2);
    printf("Please enter the sting length: ");
    scanf("%d",&len);
    strncat(arr1,arr2,len);
    printf("The concataration string are \"%s\"",arr1);
    return 0;
}
