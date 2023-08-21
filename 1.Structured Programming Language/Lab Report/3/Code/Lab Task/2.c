//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int main(){
    int m;
    printf("Please enter an integer number: ");
    scanf("%d",&m);
    if(m==0){
        printf("This number is Nutral.(0)\n");
    }
    else if(m>0){
        printf("This number is Poitive.\n");
    }
    else{
        printf("This number is Negetive.\n");
    }
    return 0;
}
