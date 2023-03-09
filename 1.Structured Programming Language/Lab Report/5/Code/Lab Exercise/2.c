/*Print Fibonacci series until a given number. For instance, if a user wants to print Fibonacci series until
1000, print all the Fibonacci number below 1000.*/
#include <stdio.h>
int main(){
    int a=0,b=1,c=0;
    printf("The fibonacci series is: ");
    printf("%d ",a);

    for(int i=1;c<=1000;i++){
       a=b;
       b=c;
       c=a+b;
        if(c>=1000){
            continue;

        }
       printf("%d ",c);


    }

}
