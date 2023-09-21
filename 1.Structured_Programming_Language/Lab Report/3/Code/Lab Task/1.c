//1. Write a C program to find maximum between two numbers.

#include <stdio.h>
int main (){
   int a=0;
    printf("Please enter the number how many number you want to get as input: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-1;j++){
            if(b[j]<b[j+1]){
                int x;
                x=b[j];
                b[j]=b[j+1];
                b[j+1]=x;
            }
        }

    }
    printf("The maximum Number is %d",b[0]);


}
