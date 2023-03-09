/*Write a C program to find reverse of a given number following the algorithm mentioned below:
Step 1: Begin
Step 2: Display "Enter a number: "
Step 3: Read n
Step 4: Initialize rev to 0
Step 5: Loop "n != 0", do
Step 5.1: rem = n%10
Step 5.2: rev = (rev*10) + rem
Step 5.3: n = n/10
Step 6: End Loop
Step 7: Print "Reverse Number: ", rev
8
Step 8: End*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=a;a!= 0;i=i){
        int rem;
        rem=a%10;
        printf("%d",rem);
        a=a/10;
    }
    return 0;
}
