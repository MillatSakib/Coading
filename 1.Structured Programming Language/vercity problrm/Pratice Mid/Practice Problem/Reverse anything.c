#include <stdio.h>
int main(){
    char rev[100];
    int n;
    printf("Please inter a string for reverse");
    fflush(stdin);
    gets(&rev);
    n=strlen(rev);
    for(int i=n-1;i>=0;i--){
        printf("%c",rev[i]);
    }
}
