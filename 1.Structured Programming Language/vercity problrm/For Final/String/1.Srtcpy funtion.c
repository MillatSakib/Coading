#include <stdio.h>
#include <string.h>
int main(){
    char p[100],q[100];
    printf("Please enter a string: ");
    gets(p);
    strcpy(q,p);
    printf("The string of q is \"%s\"",q);
    return 0;

}

