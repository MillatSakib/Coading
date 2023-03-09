//Write a C program to print all negative elements in an array.
#include <stdio.h>
int main(){
    int a,i=0,c;
    printf("Please enter the numbber how many number you want as input: ");
    scanf("%d",&a);
    int b[a+2];
    printf("Please enter all value: ");
    for(int j=0;j<a;j++){
        scanf("%d",&c);
        if(c<0){
            b[i]=c;
            i++;
        }
    }
    printf("Integer Number/s are: ");
    for(int j=0;j<i;j++){
        printf("%d  ",b[j]);
    }
    return 0;
}

