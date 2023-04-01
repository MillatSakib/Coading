#include <stdio.h>
int main(){
int a,b=0;
printf("Please enter a number for cheking it is prime or not: ");
scanf(" %d",&a);
printf("%d\n",a);
if(a>=2){
    for(int i=1;i<=a;i++){
        if(a%i==0){
            b++;

        }

    }
    if(b>2){
        printf("This Number isn't a prime number...");
    }
    else{
        printf("This number is a prime number.. ");
    }
}
else{
    printf("This number isn't a prime number.. ");
}
return 0;
}
