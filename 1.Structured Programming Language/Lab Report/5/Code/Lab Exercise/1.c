/*Write a C program to find whether a given number is a prime number or not
Step 1: Begin10
Step 2: Display "Enter a number: "
Step 3: Read n
Step 4: Initialize c to 0
Step 5: For i = 1 to n, do
Step 5.1: If "n%i==0"
Step 5.1.1: Increment c by 1
Step 5.2: EndIf;
Step 5.3: Increment i by 1
Step 6: EndFor;
Step 7: If "c<=2"
Step 7.1: Display n " is prime number"
Step 8: Else
Step 8.1: Display n " is not prime number"
Step 9: EndIf;
Step 10: End.*/

#include <stdio.h>
int main(){
    int a,c=0;
    printf("Please enter a Number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            c++;
        }
    } if(c<=2){
        printf("%d is prime number...\n",a);
    }
    else{
        printf("%d is not a prime number\n",a);
    }
    return 0;
}

