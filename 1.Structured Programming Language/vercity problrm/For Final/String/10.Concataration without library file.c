#include <stdio.h>
int main(){
    int i,j;
    char arr[100],arr0[100];
    printf("Please enter a String: ");
    gets(arr);
    printf("Please enter a string for concataration: ");
    gets(arr0);
    for(i=0;arr[i]!='\0';i++){

    }
    for(j=0;arr0[j]!='\0';j++){
        arr[i]=arr0[j];
        arr[i+1]='\0';
        i++;
    }
    printf("The concataration string is \"%s\".",arr);
    return 0;

}
