#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int len;
    printf("Please enter the string: ");
    gets(a);
    printf("Please enter the copy Length: ");
    scanf("%d",&len);
    strncpy(b,a,len);
    printf("The cpoied length is \"%s\"",b);
    return 0;
}
