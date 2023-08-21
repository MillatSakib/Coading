#include <stdio.h>
#include <string.h>
int main(){
    char p[100],q[100];
    int count=0;
    printf("Please enter a sting for copy: ");
    gets(p);

    while(p[count]!='\0' ){
        q[count]=p[count];
        count++;
        q[count+1]='\0';


    }
    printf("The copied string of q is %s",q);

    return 0;

}

