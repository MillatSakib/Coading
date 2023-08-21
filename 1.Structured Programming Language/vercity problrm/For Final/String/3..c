#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int len,i;
    printf("Please enter the string: ");
    gets(a);
    printf("Please enter copy lenth: ");
    scanf("%d",&len);
    for(i=0;i<len;i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("The copied string is %s",b);
    return 0;
}
