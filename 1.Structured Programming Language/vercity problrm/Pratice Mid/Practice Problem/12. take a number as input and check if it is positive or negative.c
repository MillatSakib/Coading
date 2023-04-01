//12.-> take a number as input and check if it is positive or negative
#include <stdio.h>
int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d",&a);
    if(a>0){
        printf("This Number is positive\n");
    }
    else if(a<0){
        printf("This Number is Negetive\n");
    }
    else{
        printf("This is a Nutral Number");
    }
    return 0;
}
