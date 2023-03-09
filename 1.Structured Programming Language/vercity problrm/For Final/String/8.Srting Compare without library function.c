#include <stdio.h>
int main(){
    int i,flag=0;
    char arr0[100],arr1[100];
    printf("Please enter a String: ");
    gets(arr0);
    for(i=0;arr0[i]!='\0';i++){
        arr1[i]=arr0[i];
        arr1[i+1]='\0';
    }

    for(int j=0;j<i;j++){
        if(arr0[j]!=arr1[j]){
            flag++;
        }
        if(flag>0){
            break;
        }
    }
    if(flag==0)
    printf("This is same string.");
    else
        printf("This string is differnt");
    return 0;
}
